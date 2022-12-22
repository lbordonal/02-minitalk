/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:48:59 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/07 11:46:46 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr++ = (unsigned char)c;
		n--;
	}
	return (s);
}

/* int	main(void)
{
	char	str[] = "Lucas";

	printf("%s", str);
	printf("\n");
	ft_memset(str, '.', 2);
	printf("%s", str);
	printf("\n");
	memset(str, '.', 2);
	printf("%s", str);
	printf("\n");
} */
