/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:02:50 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/09 14:50:13 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool inline	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

bool inline	in_range(int c, int min, int max)
{
	return (c >= min && c <= max);
}

size_t	num_len(int n)
{
	size_t	len;

	len = 0;
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
	float	decimal;
	int		integer;
	int		length;
	int		decimal_precision;

	length = 0;
	integer = (int)n;
	decimal = n - (float)integer;
	decimal_precision = precision;
	if (decimal < 0)
		decimal *= -1;
	length += ft_putnbr(integer);
	length += ft_putchar('.');
	while (precision--)
	{
		decimal *= 10;
		length++;
	}
	if (decimal)
	{
		decimal += 0.5;
		length += ft_putnbr(decimal);
	}
	else
		while (decimal_precision--)
			length += ft_putstr("0");
	return (length);
}

int	decimal_to_octal(unsigned int decimal_number)
{
	int	length;
	int	octal_number;
	int	remainder;
	int	i;

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

int	print_hash(char *string, va_list args)
{
	int	length;

	length = 0;
	if (*string == 'x')
	{
		length += ft_putstr("0x");
		length += lower(va_arg(args, unsigned int));
	}
	else if (*string == 'X')
	{
		length += ft_putstr("0X");
		length += upper(va_arg(args, unsigned int));
	}
	else if (*string == 'o')
	{
		length += ft_putstr("0");
		length += decimal_to_octal(va_arg(args, unsigned int));
	}
	else if (*string == 'f')
	{
		length += put_float(va_arg(args, double), 6);
	}
	return (length);
}
