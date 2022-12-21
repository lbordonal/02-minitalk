/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:04:30 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/09 00:51:25 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (new)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}

/* int	main(void)
{
	char	str[] = "Vamos ganhar Liquid!!!!";
	t_list	*str2;

	printf("%s", "str = ");
	printf("%s\n", str);
	str2 = ft_lstnew((void *)str);
	printf("%s", "ft_lstnew((void *)str) = ");
	printf("%s\n", (char *)str2->content);
	return (0);
} */
