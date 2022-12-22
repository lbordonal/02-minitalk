/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:28:38 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/08 12:43:17 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_empty(void)
{
	char	*str;

	str = malloc(sizeof(char) * 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		start;
	int		end;
	int		size;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	if (s1[start] == '\0')
		return (ft_str_empty());
	while (ft_strchr(set, s1[end]) && end > start)
		end--;
	size = end - start;
	new = malloc(sizeof(char) * (size + 2));
	if (!new)
		return (NULL);
	end = 0;
	while (end <= size)
		new[end++] = s1[start++];
	new[end] = '\0';
	return (new);
}

/* int	main(void)
{
	char	*str = "uLucas Henriqueu";
	char	*set = "ueLi";

	printf("%s", "str = ");
	printf("%s\n", str);
	printf("%s", "set = ");
	printf("%s\n\n", set);
	printf("%s", "ft_strtrim = ");
	printf("%s\n", ft_strtrim(str, set));
	return (0);
} */
