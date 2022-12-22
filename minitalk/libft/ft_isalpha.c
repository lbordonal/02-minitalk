/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:07:04 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/08 14:35:15 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int		a = 'a';
	int		b = '1';

	printf("%d", ft_isalpha(a));
	printf("\n");
	printf("%d", isalpha(a));
	printf("\n");
	printf("\n");
	printf("%d", ft_isalpha(b));
	printf("\n");
	printf("%d", isalpha(b));
	return (0);
} */
