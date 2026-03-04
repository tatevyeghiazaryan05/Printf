/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeghiaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 21:04:44 by tyeghiaz          #+#    #+#             */
/*   Updated: 2026/03/04 22:07:40 by tyeghiaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	m;
	int		len;

	len = 0;
	m = n;
	if (m < 0)
	{
		len += ft_putchar('-');
		m = -m;
	}
	if (m >= 10)
	{
		len += ft_putnbr(m / 10);
	}
	len += ft_putchar((m % 10) + '0');
	return (len);
}

int	ft_putunbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_putunbr(n / 10);
	}
	len += ft_putchar((n % 10) + '0');
	return (len);
}
