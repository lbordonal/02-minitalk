/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:43:40 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/19 20:21:12 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

//void	received_and_convertback(int signal)

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
		//kill(client_pid, SIGUSR1); //descobrir como conseguir client_pid
	}
}

int	main(int argc, char **argv)
{
	int	server_pid;

	(void)argv;
	server_pid = getpid();
	if (argc != 1)
	{
		ft_putstr_fd("Please, verify the input → ./server", 1);
		return (0);
	}
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd(server_pid, 1);
	ft_putstr_fd("\n", 1);
	signal(SIGUSR1, print_msg);
	signal(SIGUSR2, print_msg);
	while (1)
		pause();
	return (0);
}
