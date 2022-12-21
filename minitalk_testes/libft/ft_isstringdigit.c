/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstringdigit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:29:54 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/21 13:30:13 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isstringdigit(char *string)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (string[i])
	{
		if (ft_isdigit(string[i]) == 1)
			result = 1;
		else
			return (0);
		i++;
	}
	return (result);
}
