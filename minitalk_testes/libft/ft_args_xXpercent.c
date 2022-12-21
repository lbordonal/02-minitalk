/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_xXpercent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:58:31 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/21 13:20:17 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* %x or %X: */
int	ft_puthex_count(unsigned int n, const char type)
{
	int	len;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		ft_puthex(n, type);
		len += ft_hexlen(n);
	}
	return (len);
}

int	ft_hexlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

void	ft_puthex(unsigned int n, const char type)
{
	if (n >= 16)
	{
		ft_puthex((n / 16), type);
		ft_puthex((n % 16), type);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
		{
			if (type == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (type == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
}

/* %%: */
int	ft_putpercent(void)
{
	write(1, "%", 1);
	return (1);
}
