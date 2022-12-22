/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:56:13 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/22 11:46:33 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/minitalk_bonus.h"

void	convert_bin(unsigned char character, int server_pid)
{
	unsigned char	bit;

	bit = 0b10000000;
	while (bit != 0)
	{
		if (bit & character)
			kill(server_pid, SIGUSR1);
		else
			kill(server_pid, SIGUSR2);
		bit = bit >> 1;
		usleep(100);
	}
}

void	send_msg(int server_pid, char *client_pid, char *msg)
{
	while (*client_pid)
	{
		convert_bin(*client_pid, server_pid);
		client_pid++;
	}
	convert_bin('\0', server_pid);
	while (*msg)
	{
		convert_bin(*msg, server_pid);
		msg++;
	}
	convert_bin('\0', server_pid);
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

void	confirmation()
{
	ft_printf("%s\n", "-- Message received --");
	exit (0);
}

int	main(int argc, char **argv)
{
	int		server_pid;
	char	*client_pid;
	char	*msg;

	client_pid = ft_itoa(getpid());
	if (check_input(argc, argv) == 1)
	{
		signal(SIGUSR1, confirmation);
		server_pid = ft_atoi(argv[1]);
		msg = ft_strdup(argv[2]);
		send_msg(server_pid, client_pid, msg);
	}
	pause();
	free(client_pid);
	free(msg);
	return (0);
}
