/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:57:49 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/21 16:28:19 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

static void	print_msg(int signal)
{
	static int	bit;
	static int	character;

	if (signal == SIGUSR1)
		character += 1 << (7 - bit);
	bit++;
	if (bit == 8)
	{
		ft_putchar_fd(character, 1);
		bit = 0;
		character = 0;
	}
}

int	main(int argc, char **argv)
{
	int	server_pid;

	(void)argv;
	server_pid = getpid();
	if (argc != 1)
	{
		ft_printf("%s\n", "Please, verify the input → ./server");
		return (0);
	}
	ft_printf("%s%d\n", "Server PID: ", server_pid);
	signal(SIGUSR1, print_msg);
	signal(SIGUSR2, print_msg);
	while (1)
		pause();
	return (0);
}
