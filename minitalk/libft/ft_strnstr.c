/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:04:39 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/09 16:55:13 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((big[i + j] != '\0') && (little[j] != '\0')
			&& ((i + j) < len) && (big[i + j] == little[j]))
		{
			if (little[j + 1] == '\0')
				return ((char *)&(big[i]));
			j++;
		}
		i++;
	}
	return (NULL);
}

/* int		main(void)
{
	const char	big[] = "Lucas Lucbs Luccs";
	const char	little[] = "uc";
	char	*ptr;
//	char	*ptr2;

	ptr = ft_strnstr(big, little, 5);
//	ptr2 = strnstr(big, little, 5);
	printf("%s", "big = ");
	printf("%s\n", big);
	printf("%s", "little = ");
	printf("%s\n\n", little);
	printf("%s\n", "size = 5");
	printf("%s", "ft_strnstrn = ");
	printf("%s\n", ptr);
//	printf("%s", "strnstrn = ");
//	printf("%s\n\n", ptr2);
	printf("%s\n", "size = 1");
	ptr = ft_strnstr(big, little, 1);
//	ptr2 = strnstr(big, little, 1);
	printf("%s", "ft_strnstrn = ");
	printf("%s\n", ptr);
//	printf("%s", "strnstrn = ");
//	printf("%s\n", ptr2);
	return (0);
} */
