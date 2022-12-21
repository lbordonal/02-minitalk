/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:42:37 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/08 14:36:46 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int		a = 'a';
	int		b = '1';
	int		c = ' ';
	int		d = 157;

	printf("%d", ft_isprint(a));
	printf("\n");
	printf("%d", isprint(a));
	printf("\n");
	printf("\n");
	printf("%d", ft_isprint(b));
	printf("\n");
	printf("%d", isprint(b));
	printf("\n");
	printf("\n");
	printf("%d", ft_isprint(c));
	printf("\n");
	printf("%d", isprint(c));
	printf("\n");
	printf("\n");
	printf("%d", ft_isprint(d));
	printf("\n");
	printf("%d", isprint(d));
	return (0);
} */
