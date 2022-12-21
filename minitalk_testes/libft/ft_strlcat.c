/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:24:57 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/09 16:52:31 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	j = dlen;
	if (size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (slen + dlen);
}

/* int		main(void)
{
	char src[] = "Born";
	char dest [] = "133742";

	printf("%zu \n", ft_strlcat(dest, src, 7));
	printf("%s \n", dest);
//	printf("%i \n", strlcat(dest, src, 7));
} */
