/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:57:49 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/13 10:02:57 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	print_msg(int signal)
{
	static int	bits;
	static int	c;

	if (signal == SIGUSR1)
		c += 1 << (7 - bits);
	bits++;
	if (bits == 8)
	{
		ft_putchar_fd(c, 1);
		bits = 0;
		c = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	pid = getpid();
	if (argc != 1)
	{
		ft_putstr_fd("Please, verify the input → ./server", 1);
		return (0);
	}
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 2);
	signal(SIGUSR1, print_msg);
	signal(SIGUSR2, print_msg);
	while (1)
	{
		//receber msg do client
		pause();
	}
	return (0);
}
