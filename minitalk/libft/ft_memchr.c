/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:43:03 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/04 11:34:22 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (str[i] == (unsigned char)c)
		{
			return (str + i);
		}
		i++;
		n--;
	}
	return (NULL);
}

/* int		main(void)
{
   const char str[] = "Lucas Henrique";
   const char c = 's';

   printf("%s", "str = ");
   printf("%s\n", str);
   printf("%s", "c = ");
   printf("%c\n\n", c);
   printf("%s\n", "size = 3");
   printf("%s", "ft_memchr = ");
   printf("%s\n", (char *)ft_memchr(str, c, 3));
   printf("%s", "memchr = ");
   printf("%s\n\n", (char *)memchr(str, c, 3));
   printf("%s\n", "size = 6");
   printf("%s", "ft_memchr = ");
   printf("%s\n", (char *)ft_memchr(str, c, 6));
   printf("%s", "memchr = ");
   printf("%s\n", (char *)memchr(str, c, 6));
   return(0);
}
 */
