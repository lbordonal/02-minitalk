/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:22:23 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/03 10:40:27 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	int		a = 'a';
	int		b = '1';
	int		c = '*';

	printf("%d", ft_isalnum(a));
	printf("\n");
	printf("%d", isalnum(a));
	printf("\n");
	printf("\n");
	printf("%d", ft_isalnum(b));
	printf("\n");
	printf("%d", isalnum(b));
	printf("\n");
	printf("\n");
	printf("%d", ft_isalnum(c));
	printf("\n");
	printf("%d", isalnum(c));
	return (0);
} */
