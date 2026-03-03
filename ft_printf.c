/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeghiaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:28:38 by tyeghiaz          #+#    #+#             */
/*   Updated: 2026/02/25 21:10:47 by tyeghiaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ... )
{
	va_list list;
	int	count;


	count = 0;
	va_start(list, format);
	
	va_arg();
	va_end(list);
	return (count);
}
