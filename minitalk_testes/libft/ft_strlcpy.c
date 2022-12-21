/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:40:24 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/04 14:57:02 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size != 0)
	{
		while (src[i] != '\0' && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

/* int     main(void)
{
        char    src[] = "Hello";
        char    dest[] = "World";
		char    src1[] = "Hello";
        char    dest1[] = "World";

		printf("%s", "src = ");
        printf("%s",src);
        printf("\n");
		printf("%s", "dest = ");
        printf("%s",dest);
        printf("\n");
		printf("%s", "size = 3");
        printf("\n");
        printf("\n");
		printf("%s", "ft_strlcpy = ");
        printf("%ld",ft_strlcpy(dest, src, 3));
		printf("\n");
		printf("%s", "strlcpy = ");
        printf("%d",strlcpy(dest1, src1, 3));
        printf("\n");
		printf("%s", "src = ");
        printf("%s",src);
        printf("\n");
		printf("%s", "new dest = ");
        printf("%s",dest);
} */
