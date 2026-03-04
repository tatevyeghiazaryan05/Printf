/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeghiaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:28:38 by tyeghiaz          #+#    #+#             */
/*   Updated: 2026/03/04 22:54:22 by tyeghiaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int	count;
	int	i;

	count = 0;
	i = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				break;
			else if (format[i] == 'c')
			{
				count += ft_putchar(va_arg(list, int));
			}
			else if (format[i] == 's')
			{
				count += ft_putstr(va_arg(list, char *));
			}
			else if (format[i] == 'p')
			{	
                count += ft_putptr(va_arg(list, void *));
			}
			else if (format[i] == 'i' || format[i] == 'd')
			{
				count += ft_putnbr(va_arg(list, int));
			}
			else if (format[i] == 'u')
			{
				count += ft_putunbr(va_arg(list, unsigned int));
			}
			else if (format[i] == 'x' || format[i] == 'X')
			{
				count += ft_puthex(va_arg(list, unsigned int), format[i]);
			}
			else if (format[i] == '%')
			{
				count += ft_putchar('%');
			}
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end (list);
	return (count);
}
