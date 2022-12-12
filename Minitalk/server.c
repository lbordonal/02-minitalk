/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:57:49 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/12 20:58:15 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_msg(int signal)
{
	static int	character;
	static int	bit;

	if (signal == SIGUSR1)
		character |= 0x01 << bit;
	bit++;
	if (bit == 8)
	{
		printf("%c", character);
		bit = 0;
		character = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_putstr_fd("Please, verify the input → ./server", 1);
		return (0);
	}
	pid = getpid();
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd(pid, 1);
	//write(1, "\n", 2);
	while (1)
	{
		//receber msg do client
		signal(SIGUSR1, print_msg);
		signal(SIGUSR2, print_msg);
		//pause();
	}
	return (0);
}
