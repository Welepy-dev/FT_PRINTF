/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:04:41 by marcsilv          #+#    #+#             */
/*   Updated: 2024/12/13 16:21:46 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	only_hash(char **string, va_list args, int *length)
{
	if (**(string) == 'x')
	{
		length += ft_putstr("0x");
		length += lower(va_arg(args, unsigned int));
	}
	else if (**(string) == 'X')
	{
		length += ft_putstr("0X");
		length += upper(va_arg(args, unsigned int));
	}
	else if (**(string) == 'o')
	{
		length += ft_putstr("0");
		length += decimal_to_octal(va_arg(args, unsigned int));
	}
	else if (**(string) == 'f')
		length += put_float(va_arg(args, double), 6);//check output ft_printf("custom   printf: |%#f| float\n", 123.456);
	(*string)++;
}

void	hash(char **string, int *length, va_list args)
{
	(*string)++;
	if (**string == '.')
		dot(string, args, '\0', length);
	else
		only_hash(string, args, length);//ok
}
