/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:29:56 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/08 23:10:51 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	ft_digit_count(int nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
		count++;
	while (nbr != 0)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_digit_count(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = 48;
	while (n != 0)
	{
		str[i--] = absolute_value(n % 10) + '0';
		n /= 10;
	}
	return (str);
}

/* int		main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;

	a = 123456789;
	b = 1;
	c = 0;
	d = 0001342;
	e = -42;
	f = -123456789;
	printf("%s", "a = ");
	printf("%d\n", a);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(a));
	printf("%s", "b = ");
	printf("%d\n", b);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(b));
	printf("%s", "c = ");
	printf("%d\n", c);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(c));
	printf("%s", "d = ");
	printf("%d\n", d);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(d));
	printf("%s", "e = ");
	printf("%d\n", e);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(e));
	printf("%s", "f = ");
	printf("%d\n", f);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(f));
	return(0);
} */
