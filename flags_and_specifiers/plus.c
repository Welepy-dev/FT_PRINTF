/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:09:30 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/27 16:32:32 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_plus(char **string, va_list args, int *length)
{
	int		num;
	double	d_num;

	num = 0;
	d_num = 0;
	(*string)++;
	if (**(string) == 'd' || **(string) == 'i')
	{
		num = va_arg(args, int);
		if (num >= 0)
			length += ft_putchar('+');
		length += ft_putnbr(num);
	}
	else if (**(string) == 'f')
	{
		d_num = va_arg(args, double);
		if (d_num >= 0)
			length += ft_putchar('+');
		length += put_float(d_num, 6);
	}
	(*string)++;
}
