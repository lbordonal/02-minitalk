/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:51:23 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/08 17:48:46 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = 0;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == c)
			str = ((char *)s);
		s++;
	}
	return (str);
}

/* int		main(void)
{
	char str[] = "Lucas Henrique";
	char	a;

	a = 'u';
	printf("%s", (char *)ft_strrchr(str, a));
	printf("\n");
	printf("%s", strrchr(str, a));
	return (0);
} */
