/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:26:29 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/08 18:22:21 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (!ptr_dest && !ptr_src)
		return (NULL);
	if (src < dest)
		while (n--)
			ptr_dest[n] = ptr_src[n];
	else if (src > dest)
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/* int	main(void)
{
	char	dest[] = "Lucas";
	char	dest1[] = "Lucas";
	char	src[] = "WXYZ";
	char	src1[] = "WXYZ";

	printf("%s", dest);
	printf(" / ");
	printf("%s", src);
	printf("\n");
	ft_memmove(dest, src, 3);
	printf("%s", dest);
	printf("\n");
	memmove(dest1, src1, 3);;
	printf("%s", dest1);
} */
