/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:48:02 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/21 13:22:14 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *input, ...)
{
	int		i;
	int		bytes;
	va_list	args;

	i = 0;
	bytes = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			bytes += check_argument(args, input[i + 1]);
			i++;
		}
		else
			bytes += ft_putchar_count(input[i]);
		i++;
	}
	va_end(args);
	return (bytes);
}

int	check_argument(va_list args, const char type)
{
	int	length;

	length = 0;
	if (type == 'c')
		length += ft_putchar_count(va_arg(args, int));
	else if (type == 's')
		length += ft_putstr_count(va_arg(args, char *));
	else if (type == 'p')
		length += ft_putptr_count(va_arg(args, unsigned long long));
	else if (type == 'd' || type == 'i')
		length += ft_putnbr_count(va_arg(args, int));
	else if (type == 'u')
		length += ft_put_unsignedint_count(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		length += ft_puthex_count(va_arg(args, unsigned int), type);
	else if (type == '%')
		length += ft_putpercent();
	return (length);
}
