/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:57:49 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/08 17:24:15 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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
	while (1)
	{
		//receber msg do client
	}
	return (0);
}
