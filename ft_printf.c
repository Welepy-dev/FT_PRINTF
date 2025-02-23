/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:26:50 by marcsilv          #+#    #+#             */
/*   Updated: 2025/02/23 12:37:16 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

static void	find_specifier(char **string, va_list args, int *length)
{
	if (**string == 'c')
		length += ft_putchar(va_arg(args, int));
	else if (**string == 's')
		length += ft_putstr(va_arg(args, char *));
	else if (**string == 'p')
		length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (**string == 'd' || **string == 'i')
		length += ft_putnbr(va_arg(args, int));
	else if (**string == 'u')
		length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (**string == 'x')
		length += lower(va_arg(args, unsigned int));
	else if (**string == 'X')
		length += upper(va_arg(args, unsigned int));
	else if (**string == '%')
		length += ft_putchar('%');
	else if (**string == 'o')
		length += decimal_to_octal(va_arg(args, unsigned int));
	else if (**string == 'f')
		length += put_float(va_arg(args, double), 6);
	(*string)++;
}

static void	printf_util(char **string, va_list args, int *length)
{
	(*string)++;
	if ((**(string) == '#'))
		hash(string, length, args);
	else if (**(string) == '.')
		dot(string, args, '.', length);
	else if (**(string) == '+')
		print_plus(string, args, length);
	else if (**(string) == ' ')
		print_space(length, string, args);
	else if (**(string) == '0')
		print_zero(length, string, args);
	else if (ft_isdigit(**(string)))
		print_digits(length, string, args);
	else if (**(string) == '-')
		print_minus(length, string, args);
	else
		find_specifier(string, args, length);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		length;

	length = 0;
	va_start(args, string);
	while (*string)
	{
		if (*string == '%')
			printf_util((char **)&string, args, &length);
		else
		{
			length += ft_putchar(*string);
			string++;
		}
	}
	va_end(args);
	return (length);
}
