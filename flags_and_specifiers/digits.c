/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:50:32 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/25 12:57:23 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	digit_dot_float(va_list args, int *length, int *tab)
{
	int		i;
	int		num;
	float	float_num;
	float	decimal;

	i = 0;
	float_num = va_arg(args, double);
	num = (int)float_num;
	decimal = float_num - (float)num;
	while (i < (tab[0] - ((int)num_len(num) + tab[1] + 1)))
	{
		length += ft_putchar(' ');
		i++;
	}
	while (tab[0]--)
		decimal *= 10;
	length += ft_putnbr(num);
	length += ft_putchar('.');
	decimal += 0.5;
	length += ft_putnbr(decimal);
}

static void	digit_dot(char **string, va_list args, int *length, int allign)
{
	int		i;
	int		tab[2];
	char	*str;

	(*string)++;
	tab[0] = allign;
	tab[1] = allign_util(string);
	if (**(string) == 's')
	{
		str = va_arg(args, char *);
		i = 0;
		while (i < tab[1])
			length += ft_putchar(str[i++]);
		i = 0;
		while ((tab[1] - (int)ft_strlen(*string) + 1) >= i++)
			length += ft_putchar(' ');
	}
	else if (**(string) == 'f')
		digit_dot_float(args, length, tab);
	(*string)++;
}

static void	print_digits_util(va_list args, char **string, \
int *length, int allign)
{
	int	i;
	int	num;

	i = 0;
	(*string)++;
	num = va_arg(args, int);
	while (i < allign - (int)num_len(num))
	{
		length += ft_putchar(' ');
		i++;
	}
	length += ft_putnbr(num);
	(*string)++;
}

static void	print_digits_util2(va_list args, char **string, \
int *length, int allign)
{
	int	i;
	int	c;

	i = 0;
	(*string)++;
	while (i < allign - 1)
	{
		length += ft_putchar(' ');
		i++;
	}
	c = va_arg(args, int);
	length += ft_putchar(c);
}

void	print_digits(int *length, char **string, va_list args)
{
	char	*str;
	int		tab[2];

	tab[0] = 0;
	tab[1] = allign_util(string);
	if (**(string) == '.')
		digit_dot(string, args, length, tab[1]);
	else if (**(string) == 'd' || **(string) == 'i')
		print_digits_util(args, string, length, tab[1]);
	else if (**(string) == 'c')
		print_digits_util2(args, string, length, tab[1]);
	else if (**(string) == 's')
	{
		str = va_arg(args, char *);
		while (tab[0] < tab[1] - (int)ft_strlen(str))
		{
			length += ft_putchar (' ');
			tab[0]++;
		}
		length += ft_putstr(str);
		(*string)++;
	}
}
