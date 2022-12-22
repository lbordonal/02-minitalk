/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:41:52 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/03 10:53:53 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr++ = '\0';
		n--;
	}
}

/* int	main(void)
{
	char	str[] = "Lucas";
	char	str1[] = "Lucas";

	printf("%s", str);
	printf("\n");
	ft_bzero(str, 2);
	printf("%s", str);
	printf("\n");
	printf("\n");
	printf("%s", str1);
	printf("\n");
	bzero(str1, 2);
	printf("%s", str1);
	printf("\n");
} */
