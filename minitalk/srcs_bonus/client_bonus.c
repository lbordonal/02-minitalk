/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:56:13 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/26 17:52:02 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/minitalk_bonus.h"

void	send_msg(int server_pid, char *msg)
{
	unsigned char	character;
	int				bit;

	while (*msg)
	{
		character = *msg;
		bit = 8;
		while (bit--)
		{
			if (character & 0b10000000)
				kill(server_pid, SIGUSR1);
			else
				kill(server_pid, SIGUSR2);
			usleep(50);
			character <<= 1;
		}
		msg++;
	}
}

void	send_null(int server_pid)
{
	int		bit;
	char	null;

	bit = 7;
	null = '\0';
	while (bit >= 0)
	{
		if (null >> bit & 1)
			kill(server_pid, SIGUSR1);
		else
			kill(server_pid, SIGUSR2);
		usleep(400);
		bit--;
	}
}

void	handler_sig(int signal, siginfo_t *info, void *ucontent)
{
	(void)ucontent;
	(void)info;
	if (signal == SIGUSR1)
		ft_printf("%s\n", "Message received");
	exit (1);
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
	int					server_pid;
	char				*msg;
	struct sigaction	sa_newsig;

	if (check_input(argc, argv) == 1)
	{
		sa_newsig.sa_sigaction = &handler_sig;
		sa_newsig.sa_flags = SA_SIGINFO;
		server_pid = ft_atoi(argv[1]);
		msg = ft_strjoin(argv[2], "\n");
		if (sigaction(SIGUSR1, &sa_newsig, NULL) == -1)
			ft_printf("%s\n", "Error → Failed to send SIGUSR1");
		send_msg(server_pid, msg);
		free(msg);
		send_null(server_pid);
	}
	while (1)
		pause ();
	return (0);
}
