/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:57:51 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/08 17:24:10 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	int		pid;
	char	*msg;

	if (argc != 3)
	{
		ft_putstr_fd("Please, verify the input → ./client <PID> <Message>", 1);
		return (0);
	}
	if (!ft_isstringdigit(argv[1]))
	{
		ft_putstr_fd("Please, verify the PID → It should contain only numbers", 1);
		return (0);
	}
	if (*argv[2] == 0)
	{
		ft_putstr_fd("Please, insert a non-empty message", 1);
		return (0);
	}
	pid = ft_atoi(argv[1]);
	msg = argv[2];
	write(1, "PID: ", 5);
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 2);
	write(1, "Message: ", 9);
	ft_putstr_fd(msg, 1);
	return (0);
}
