/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 01:11:17 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/09 13:59:09 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
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
	t_list	*last;

	list = ft_lstnew("Ariadne / ");
	str0 = ft_lstnew("Lucas / ");
	str1 = ft_lstnew("Matheus.");

	list->next = str0;
	str0->next = str1;
	printf("%s\n\n", "Lista: ");
	print_list(list);
	printf("\n\n");
	printf("%s", "ft_lstlast = ");
	last = ft_lstlast(list);
	printf("%s\n", (char *)(last->content));
	return(0);
} */
