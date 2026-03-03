/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeghiaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:28:38 by tyeghiaz          #+#    #+#             */
/*   Updated: 2026/03/03 23:00:32 by tyeghiaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ... )
{
	va_list list;
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
			int j;
			if (format[i] == 'c')
			{
				j = va_arg(list, int);
				count += ft_putchar(j);
			}
			else if (format[i] == 's')
			{
				char *s;

				s = va_arg(list, char *);
				count += ft_putstr(s);
			}
			else if (format[i] == 'p')
			{
				void *j;
				
				j = va_arg(list, void *);
                                cont += ft_putstr(format[i]);
			}
			else if (format[i] == 'i')
			{
				
			}
		else
			count += ft_putchar(format[i]);
		}
		i++;
	}
	va_end (list);
	return (count);
}
