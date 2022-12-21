/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:33:07 by lbordona          #+#    #+#             */
/*   Updated: 2022/11/07 17:56:24 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/* int	main(void)
{
	char	a[] = "Lucas";

	printf("%s", "a = ");
	printf("%s\n", a);
	printf("%s\n\n", "ft_putstr_fd =");
	ft_putstr_fd(a, 1);
	return (0);
} */
