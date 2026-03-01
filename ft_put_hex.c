/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeghiaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 23:07:26 by tyeghiaz          #+#    #+#             */
/*   Updated: 2026/03/01 19:36:38 by tyeghiaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_puthex(unsigned long n, char symbol)
{
	char	*alphabet;
	int		count;

	count = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (symbol == 'x')
		alphabet = "0123456789abcdef";
	else
		alphabet = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_puthex(n / 16, symbol);
	}
	write(1, &(alphabet[n % 16]), 1);
	count += 1;
	return (count);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	p;

	p = (unsigned long)ptr;
	if (!p)
		return (write(1, "(nil)", 5));
	write (1, "0x", 2);
	count = 2 + ft_puthex(p, 'x');
	return (count);
}
