/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:09:45 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/27 15:45:45 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	dot_float(char **string, va_list args, int skips, char dot)
{
	int	num;
	int	length;

	num = 0;
	length = 0;
	*(*string) += skips;
	num = (int)va_arg(args, double);
	length += ft_putnbr(num);
	if (dot)
		length += ft_putchar('.');
	return (length);
}

static void	dot_num(int *length, char **string, va_list args)
{
	char	*str;
	int		allign;
	int		k;
	float	float_num;

	allign = 0;
	float_num = 0;
	allign = allign_util(string);
	if (**(string) == 'f')
	{
		float_num = va_arg(args, double);
		length += put_float(float_num, allign);
	}
	else if (**(string) == 's')
	{
		str = va_arg(args, char *);
		k = 0;
		while (k < allign)
		{
			length += ft_putchar(str[k]);
			k++;
		}
	}
}

static void	dot_string(int *length, char **string, va_list args)
{
	char	*str;
	// int		allign;

	(*string)++;
	// allign = 0;
	// allign = allign_util(string);
	str = va_arg(args, char *);
	while (*str)
	{
		length += ft_putchar(*str);
		str++;
	}
}

void	dot(char **string, va_list args, char dot, int *length)		//problem in whole function
{
	(*string)++;
	if ((**(string) == '0') && (**(string + 1) == 'f'))
		length += dot_float(string, args, 2, dot);	//problem
	else if ((**(string) == 'f'))
		length += dot_float(string, args, 1, dot);	//problem
	else if ((**(string) == 's'))
		dot_string(length, string, args);
	else if (in_range(**(string), '1', '9'))
		dot_num(length, string, args);			//problem
	(*string)++;
}
