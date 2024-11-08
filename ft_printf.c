/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:26:50 by marcsilv          #+#    #+#             */
/*   Updated: 2024/06/05 13:19:15 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	lower(unsigned int decimalnumber)
{
	char	hexnumber[32];
	int		i;
	int		reverse_i;

	i = 0;
	if (decimalnumber == 0)
		return (ft_putchar('0'), 1);
	while (decimalnumber)
	{
		hexnumber[i++] = "0123456789abcdef"[decimalnumber % 16];
		decimalnumber /= 16;
	}
	reverse_i = i - 1;
	while (reverse_i >= 0)
	{
		ft_putchar(hexnumber[reverse_i]);
		reverse_i--;
	}
	return (i);
}

int	upper(unsigned int decimalnumber)
{
	char	hexnumber[32];
	int		i;
	int		reverse_i;
	int		remainder;

	i = 0;
	if (decimalnumber == 0)
		return (ft_putchar('0'), 1);
	while (decimalnumber != 0)
	{
		remainder = decimalnumber % 16;
		if (remainder < 10)
			hexnumber[i++] = 48 + remainder;
		else
			hexnumber[i++] = 55 + remainder;
		decimalnumber /= 16;
	}
	reverse_i = i - 1;
	while (reverse_i >= 0)
	{
		ft_putchar(hexnumber[reverse_i]);
		reverse_i--;
	}
	return (i);
}

int	find_specifier(char *string, va_list args)
{
	int	length;

	length = 0;
	if (*string == 'c')
		length += ft_putchar(va_arg(args, int));				//fetches from args "argument pointer the next argument that fits the type given"
	else if (*string == 's')
		length += ft_putstr(va_arg(args, char *));
	else if (*string == 'p')
		length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (*string == 'd' || *string == 'i')
		length += ft_putnbr(va_arg(args, int));
	else if (*string == 'u')
		length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (*string == 'x')
		length += lower(va_arg(args, unsigned int));
	else if (*string == 'X')
		length += upper(va_arg(args, unsigned int));
	else if (*string == '%')
		length += ft_putchar('%');
	else if (*string == '#')
		length += print_hash(*string + 1, args);
	return (length);
}

int	ft_printf(const char *string, ...)
{
	int		length;
	va_list	args;					//creates an object with the list of the arguments, args is a pointer to a structure that holds information of the argumetns passed, initially the first argument

	length = 0;
	va_start(args, string);		//initializes a vecto with the list of the
	while (*string)
	{
		if (*string == '%')
		{
			length += find_specifier(*string + 1, args);
			++string;
		}
		else
			length += ft_putchar(*string);
		++string;
	}
	va_end (args);				//cleans stuff
	return (length);
}
