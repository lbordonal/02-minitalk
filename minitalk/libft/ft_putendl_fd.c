/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:33:44 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/08 15:52:47 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/* int	main(void)
{
	char	a[] = "Lucas";

	printf("%s", "a = ");
	printf("%s\n", a);
	printf("%s\n\n", "ft_putendl_fd =");
	ft_putendl_fd(a, 1);
	return (0);
} */
