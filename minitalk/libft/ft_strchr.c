/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:07:22 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/03 18:03:53 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (s[i] != c)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
		i++;
		str++;
	}
	return (str);
}

/* int		main(void)
{
	char str[] = "Lucas";
	char	a;

	a = 'u';
	ft_strchr(str, a);
	printf("%s", (char *)ft_strchr(str, a));
	printf("\n");
	printf("%s", strchr(str, a));
	return (0);
} */
