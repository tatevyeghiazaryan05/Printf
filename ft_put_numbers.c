/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeghiaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 21:04:44 by tyeghiaz          #+#    #+#             */
/*   Updated: 2026/03/01 17:00:21 by tyeghiaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int n)
{
	long	m;

	m = n;
	if (m < 0)
	{
		ft_putchar('-');
		m = -m;
	}
	if (m >= 10)	
	{
		ft_putnbr(m/10);
	}
	ft_putchar((m % 10) + '0');
}

int	ft_putunbr(unsigned int n)
{
	if (n >= 10)
	{
		ft_putunbr(n/10);
	}
	ft_putchar((n % 10) + '0');
}

