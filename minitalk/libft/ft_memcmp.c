/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:34:38 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/08 16:47:10 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str_s1;
	char	*str_s2;

	i = 0;
	str_s1 = (char *)s1;
	str_s2 = (char *)s2;
	if (n == 0)
		return (0);
	while ((i < n - 1) && (str_s1[i] == str_s2[i]))
		i++;
	return ((unsigned char)str_s1[i] - (unsigned char)str_s2[i]);
}

/* int		main(void)
{
	char	a[] = "Matheus";
	char	b[] = "Lucas";

	printf("%s\n", a);
	printf("%s\n\n", b);
	printf("%s", "ft_memcmp = ");
	printf("%d", ft_memcmp(a, b, 4));
	printf("\n");
	printf("%s", "memcmp = ");
	printf("%d", memcmp(a, b, 4));
	return (0);
} */
