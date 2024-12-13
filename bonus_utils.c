/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/11/09 00:02:50 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/09 14:50:13 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


bool	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

bool	in_range(int c, int min, int max)
{
	return (c >= min && c <= max);
}

size_t	num_len(int n)
{
	size_t len;

	len = 0;
	if (n == INT_MIN)
		return (11);
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	put_float(float n, int precision)
{
	int count = 0;
	int int_part = (int)n;
	float decimal_part = n - int_part;

	// Handle negative numbers
	if (n < 0)
	{
		count += ft_putchar('-');
		int_part = -int_part;
		decimal_part = -decimal_part;
	}

	// Print the integer part
	count += ft_putnbr(int_part);

	// Print the decimal point
	count += ft_putchar('.');

	// Handle rounding: multiply by 10^precision, then round
	float rounding_factor = 0.5;
	for (int i = 0; i < precision; i++)
		rounding_factor /= 10;

	decimal_part += rounding_factor;

	// Print decimal digits
	for (int i = 0; i < precision; i++)
	{
		decimal_part *= 10;
		int digit = (int)decimal_part;
		count += ft_putnbr(digit);
		decimal_part -= digit;
	}

	return (count);
}

/*int	put_float(float n, int precision)
{
	float	decimal;
	int		tab[3];

	tab[1] = 0;
	tab[0] = (int)n;
	decimal = n - (float)tab[0];
	tab[2] = precision;
	if (decimal < 0)
		decimal *= -1;
	tab[1] += ft_putnbr(tab[0]);
	tab[1] += ft_putchar('.');
	while (precision--)
	{
		decimal *= 10;
		tab[1]++;
	}
	if (decimal)
	{
		decimal += 0.5;
		tab[1] += ft_putnbr(decimal);
	}
	else
		while (tab[2]--)
			tab[1] += ft_putstr("0");
	return (tab[1]);
}*/

int	decimal_to_octal(unsigned int decimal_number)
{
	int length;
	int octal_number;
	int remainder;
	int i;

	length = 0;
	octal_number = 0;
	i = 1;
	while (decimal_number != 0)
	{
		remainder = decimal_number % 8;
		decimal_number /= 8;
		octal_number += remainder * i;
		i *= 10;
		length++;
	}
	ft_putnbr(octal_number);
	return (length);
}
