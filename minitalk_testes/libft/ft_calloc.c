/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:33:54 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/04 17:37:41 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*new;
	size_t			i;
	unsigned int	total;

	i = 0;
	total = nmemb * size;
	new = malloc(total);
	if (!new)
		return (NULL);
	while (total > 0)
	{
		new[i] = 0;
		total--;
		i++;
	}
	return ((void *)new);
}

/* int	main()
{
	int	n = 5;
	int	i = 0;
	char	*a = ft_calloc(n, sizeof(char));
	while (i < n)
	{
		printf("%p\n", &a[i]);
		i++;
	}
	free(a);
	return (0);
} */
