/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:45:23 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/04 16:10:16 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*new;

	i = 0;
	size = ft_strlen(s);
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/* int		main(void)
{
	char a[] = "Lucas";
	char *b;
	char *c;

	b = ft_strdup(a);
	c = strdup(a);
	printf("%s", "a = ");
	printf("%s\n\n", a);
	printf("%s", "ft_strdup = ");
	printf("%s\n", b);
	printf("%s", "strdup = ");
	printf("%s\n", c);
} */
