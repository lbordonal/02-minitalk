/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:55:36 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/22 11:38:13 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

typedef struct s_info
{
	int				index;
	unsigned char	character;
	char			str[4096];
	int				flag;
	int				client_pid;
}				t_info;

# include "../libft/libft.h"
# include <signal.h>
# include <sys/types.h>

#endif
