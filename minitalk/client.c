/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:57:51 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/19 16:32:41 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_msg(int server_pid, char msg)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if (msg >> bit & 1)
			kill(server_pid, SIGUSR1);
		else
			kill(server_pid, SIGUSR2);
		usleep(100);
		bit--;
	}
}

int	check_input(int ac, char **av)
{
	int	correct_input;

	correct_input = 0;
	if (ac != 3)
		ft_putstr_fd("Please, verify the input → ./client <PID> <Message>\n", 1);
	else if (!ft_isstringdigit(av[1]))
		ft_putstr_fd("Please, verify the PID → It should contain only numbers\n", 1);
	else if (*av[2] == 0)
		ft_putstr_fd("Please, insert a non-empty message\n", 1);
	else
		correct_input = 1;
	return (correct_input);
}

int	main(int argc, char **argv)
{
	int		i;
	int		server_pid;
	char	*msg;

	i = 0;
	if (check_input(argc,argv) == 1)
	{
		server_pid = ft_atoi(argv[1]);
		msg = ft_strdup(argv[2]);
	/* 	write(1, "PID: ", 5);//remover depois dos testes finais
		ft_putnbr_fd(server_pid, 1); //remover depois dos testes finais
		write(1, "\n", 2);//remover depois dos testes finais
		write(1, "Message: ", 9);//remover depois dos testes finais
		ft_putstr_fd(msg, 1);//remover depois dos testes finais
	*/	while (msg[i] != '\0')
		{
			send_msg(server_pid, msg[i]);//enviar cada char para server ou enviar msg completa e tratar dentro do send_bits?
			i++;
		}
		free(msg);
	}
	return (0);
}
