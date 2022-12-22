/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:54:34 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/07 15:03:05 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	i = 0;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (!ptr_dest && !ptr_src)
		return (NULL);
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	dest[] = "WXYZ";
	char	dest1[] = "WXYZ";
	char	src[] = "Lucas";
	char	src1[] = "Lucas";

	printf("%s", dest);
	printf(" / ");
	printf("%s", src);
	printf("\n");
	ft_memcpy(dest, src, 2);
	printf("%s", dest);
	printf("\n");
	memcpy(dest1, src1, 2);;
	printf("%s", dest1);
} */
