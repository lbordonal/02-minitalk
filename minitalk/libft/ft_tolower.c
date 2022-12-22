/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:02:24 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/07 15:00:31 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 65;
	b = 36;
	printf("%s", "Char = ");
	printf("%c", a);
	printf("\n");
	printf("%s", "ft_tolower = ");
	printf("%c", ft_tolower(a));
	printf("\n");
	printf("%s", "tolower = ");
	printf("%c", tolower(a));
	printf("\n");
	printf("\n");
	printf("%s", "Char = ");
	printf("%c", b);
	printf("\n");
	printf("%s", "ft_tolower = ");
	printf("%c", ft_tolower(b));
	printf("\n");
	printf("%s", "tolower = ");
	printf("%c", tolower(b));
	return (0);
}
 */
