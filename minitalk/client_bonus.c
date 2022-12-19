/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:43:25 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/19 20:27:11 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/* static void	msg_received(int signal)
{
	if (signal == SIGUSR1)
		ft_putstr_fd("Char received (:", 1);
	else
		ft_putstr_fd("Char received (:", 1);
} */

void	convert_and_send(unsigned char c, int server_pid)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if (c >> bit & 1)
			kill(server_pid, SIGUSR1);
		else
			kill(server_pid, SIGUSR2);
		usleep(400);
		bit--;
	}
}

void	send_clientpid_and_msg(int server_pid, char *client_pid, char *msg)
{
	int	i;

	i = 0;
	while (client_pid[i] != '\0')
	{
		convert_and_send(client_pid[i], server_pid);
		i++;
	}
	convert_and_send('*', server_pid);
	i = 0;
	while (msg[i] != '\0')
	{
		convert_and_send(msg[i], server_pid);
		i++;
	}
	convert_and_send('\n', server_pid);
}

int	check_input(int ac, char **av)
{
	int	correct_input;

	correct_input = 0;
	if (ac != 3)
		ft_putstr_fd("Please, verify the input → ./client <PID> <Message>\n", 1);
	else if (!ft_isstringdigit(av[1]))
	{
		ft_putstr_fd("Please, verify the PID", 1);
		ft_putstr_fd("→ It should contain only numbers\n", 1);
	}
	else if (*av[2] == 0)
		ft_putstr_fd("Please, insert a non-empty message\n", 1);
	else
		correct_input = 1;
	return (correct_input);
}

int	main(int argc, char **argv)
{
	int		server_pid;
	int		c_pid;
	char	*client_pid;
	char	*msg;

	c_pid = getpid();
	client_pid = ft_itoa(c_pid);
	if (check_input(argc, argv) == 1)
	{
		server_pid = ft_atoi(argv[1]);
		msg = argv[2];
		send_clientpid_and_msg(server_pid, client_pid, msg);
		pause();
		free(client_pid);
	}
	return (0);
}
