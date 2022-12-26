/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:56:24 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/26 17:52:01 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/minitalk_bonus.h"

void	handler_sig(int signal, siginfo_t *info, void *ucontent)
{
	static int	bit;
	static int	character;

	(void)ucontent;
	if (signal == SIGUSR1)
		character += 1 << (7 - bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", character);
		if (character == '\0')
			kill(info->si_pid, SIGUSR1);
		bit = 0;
		character = 0;
	}
}

int	main(int argc, char **argv)
{
	int					server_pid;
	struct sigaction	sa_newsig;

	(void)argv;
	server_pid = getpid();
	sa_newsig.sa_sigaction = &handler_sig;
	sa_newsig.sa_flags = SA_SIGINFO;
	if (argc != 1)
	{
		ft_printf("%s\n", "Please, verify the input → ./server");
		return (0);
	}
	ft_printf("%s%d\n", "Server PID: ", server_pid);
	if (sigaction(SIGUSR1, &sa_newsig, NULL) == -1)
		ft_printf("%s\n", "Error → Failed to send SIGUSR1");
	if (sigaction(SIGUSR2, &sa_newsig, NULL) == -1)
		ft_printf("%s\n", "Error → Failed to send SIGUSR2");
	while (1)
		pause();
	return (0);
}
