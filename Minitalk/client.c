/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:57:51 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/12 21:01:03 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int pid, char msg)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((bit & msg))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit++;
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	int		i;
	/* char	*msg;
 */
	i = 0;
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
	/* msg = argv[2];
	write(1, "PID: ", 5);
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 2);
	write(1, "Message: ", 9);
	ft_putstr_fd(msg, 1); */
	while (argv[2][i] != '\0')
	{
		handler(pid, argv[2][i]);//enviar cada char para server
		printf("%c", argv[2][i]);
		i++;
	}
	return (0);
}
