/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:48:08 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/03 15:05:13 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 97;
	b = 36;
	printf("%s", "Char = ");
	printf("%c", a);
	printf("\n");
	printf("%s", "ft_toupper = ");
	printf("%c", ft_toupper(a));
	printf("\n");
	printf("%s", "toupper = ");
	printf("%c", toupper(a));
	printf("\n");
	printf("\n");
	printf("%s", "Char = ");
	printf("%c", b);
	printf("\n");
	printf("%s", "ft_toupper = ");
	printf("%c", ft_toupper(b));
	printf("\n");
	printf("%s", "toupper = ");
	printf("%c", toupper(b));
	return (0);
} */
