/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:27:41 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/07 17:46:00 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i + j] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}

/* int	main(void)
{
	char	s1[] = "Vasco nao ";
	char	s2[] = "sobe!!!!!";

	printf("%s", "s1 = ");
	printf("%s\n", s1);
	printf("%s", "s2 = ");
	printf("%s\n\n", s2);
	printf("%s", "ft_strjoin = ");
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
} */
