/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:53:29 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/09 14:14:02 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/* void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		list = list->next;
	}
}

int	main(void)
{
	t_list	*list;
	t_list	*str0;
	t_list	*str1;
	t_list	*new;

	list = ft_lstnew("Ariadne / ");
	str0 = ft_lstnew("Lucas / ");
	str1 = ft_lstnew("Matheus.");
	new = ft_lstnew("Oi, me adicionaram aqui! / ");


	list->next = str0;
	str0->next = str1;

	printf("%s\n", "Lista: ");
	print_list(list);
	printf("\n\n");
	ft_lstadd_front(&list, new);
	printf("%s\n", "ft_lstadd_front: ");
	print_list(list);
	return(0);
} */
