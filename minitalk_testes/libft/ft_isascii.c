/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:27:33 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/03 10:40:51 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int		a = 'a';
	int		b = '1';
	int		c = '*';
	int		d = 157;

	printf("%d", ft_isascii(a));
	printf("\n");
	printf("%d", isascii(a));
	printf("\n");
	printf("\n");
	printf("%d", ft_isascii(b));
	printf("\n");
	printf("%d", isascii(b));
	printf("\n");
	printf("\n");
	printf("%d", ft_isascii(c));
	printf("\n");
	printf("%d", isascii(c));
	printf("\n");
	printf("\n");
	printf("%d", ft_isascii(d));
	printf("\n");
	printf("%d", isascii(d));
	return (0);
} */
