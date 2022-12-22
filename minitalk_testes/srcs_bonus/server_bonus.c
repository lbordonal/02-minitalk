/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:56:24 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/22 11:40:11 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/minitalk_bonus.h"

t_info	info;

void	disconvert_bin(int signal)
{
	unsigned char	bit;

	bit = 0b10000000;
	if (signal == SIGUSR2)
		info.index++;
	if (signal == SIGUSR1)
	{
		bit = bit >> info.index;
		info.character = info.character | bit;
		info.index++;
	}
}

void	start_info(t_info *info)
{
	int	i;

	i = 0;
	info->character = 0;
	info->index = 0;
	info->flag = 0;
	while (i < 4096)
	{
		info->str[i] = 0;
		i++;
	}
}

void	print_and_send_confirmation(t_info *info)
{
	 ft_putstr_fd(info->str, 1);
	 ft_putchar_fd('\n', 1);
	 kill(info->client_pid, SIGUSR1);
	 info->flag = 0;
}

void	get_client_pid(t_info *info)
{
	int	i;

	i = 0;
	if (info->flag == 0)
	{
		info->client_pid = ft_atoi(info->str);
		info->flag = 1;
	}
	else
		print_and_send_confirmation(info);
	while (i < 4096)
	{
		info->str[i] = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	server_pid;

	(void)argv;
	server_pid = getpid();
	if (argc != 1)
	{
		ft_printf("%s\n", "Please, verify the input → ./server");
		return (0);
	}
	ft_printf("%s%d\n", "Server PID: ", server_pid);
	start_info(&info);
	signal(SIGUSR1, disconvert_bin);
	signal(SIGUSR2, disconvert_bin);
	while (1)
	{
		pause();
		if (info.index == 8)
		{
			i = 0;
			while (info.str[i] != 0)
				i++;
			info.str[i] = info.character;
			if (info.character == '\0')
				get_client_pid(&info);
			info.index = 0;
			info.character = 0;
		}
	}
	return (0);
}

