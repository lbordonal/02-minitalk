/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:47:32 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/08 17:02:12 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n'
		|| *nptr == '\v' || *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == 43)
		nptr++;
	else if (*nptr == 45)
	{
		sign = 1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9' && *nptr != '\0')
	{
		result = (*nptr++ - '0') + (result * 10);
	}
	if (sign == 1)
		return (-result);
	else
		return (result);
}

/* int		main(void)
{
	char a[] = "-1231as23";
	char b[] = "-+1231as23";
	char c[] = "+a231as23";
	char d[] = "  21+1231as23";
	char e[] = " aasdwae";

	printf("%s", "a = ");
	printf("%s\n", a);
	printf("%s", "ft_atoi = ");
	printf("%d\n", ft_atoi(a));
	printf("%s", "atoi = ");
	printf("%d\n\n", atoi(a));
	printf("%s", "b = ");
	printf("%s\n", b);
	printf("%s", "ft_atoi = ");
	printf("%d\n", ft_atoi(b));
	printf("%s", "atoi = ");
	printf("%d\n\n", atoi(b));
	printf("%s", "c = ");
	printf("%s\n", c);
	printf("%s", "ft_atoi = ");
	printf("%d\n", ft_atoi(c));
	printf("%s", "atoi = ");
	printf("%d\n\n", atoi(c));
	printf("%s", "d = ");
	printf("%s\n", d);
	printf("%s", "ft_atoi = ");
	printf("%d\n", ft_atoi(d));
	printf("%s", "atoi = ");
	printf("%d\n\n", atoi(d));
	printf("%s", "e = ");
	printf("%s\n", e);
	printf("%s", "ft_atoi = ");
	printf("%d\n", ft_atoi(e));
	printf("%s", "atoi = ");
	printf("%d\n\n", atoi(e));
	return (0);
} */
