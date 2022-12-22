/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:57:51 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/22 11:46:34 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

void	send_msg(int server_pid, char msg)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if (msg >> bit & 1)
			kill(server_pid, SIGUSR1);
		else
			kill(server_pid, SIGUSR2);
		usleep(400);
		bit--;
	}
}

int	check_input(int ac, char **av)
{
	int	correct_input;

	correct_input = 0;
	if (ac != 3)
		ft_printf("%s\n", "Please, verify the input → ./client <PID> <Message>");
	else if (!ft_isstringdigit(av[1]))
	{
		ft_printf("%s", "Please, verify the PID");
		ft_printf("%s\n", " → It should contain only numbers.");
	}
	else if (*av[2] == 0)
		ft_printf("%s\n", "Please, insert a non-empty message.");
	else
		correct_input = 1;
	return (correct_input);
}

int	main(int argc, char **argv)
{
	int		i;
	int		server_pid;
	char	*msg;

	i = 0;
	if (check_input(argc, argv) == 1)
	{
		server_pid = ft_atoi(argv[1]);
		msg = ft_strdup(argv[2]);
		while (msg[i] != '\0')
		{
			send_msg(server_pid, msg[i]);
			i++;
		}
		free(msg);
		send_msg(server_pid, '\n');
	}
	return (0);
}
