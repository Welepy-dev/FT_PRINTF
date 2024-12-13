/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:38:29 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/25 11:03:46 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	point_util(char **string, va_list args, int *length, int allign)
{
	double	d_num;
	double	decimal;
	int		i;
	int		num;
	int		limit;

	i = 0;
	d_num = va_arg(args, double);
	num = (int)d_num;
	decimal = d_num - (float)num;
	limit = allign_util(string);
	while (limit--)
		decimal *= 10;
	length += ft_putnbr(num);
	length += ft_putchar('.');
	decimal += 0.5;
	length += ft_putnbr(decimal);
	while (i < (allign - ((int)num_len(decimal) + (int)num_len(num) + 1)))
	{
		length += ft_putchar(' ');
		i++;
	}
}

static void	dash_point(char **string, va_list args, int *length, int allign)
{
	int		tab[3];
	char	*str;

	(*string)++;
	tab[0] = allign_util(string);
	if (**(string) == 's')
	{
		str = va_arg(args, char *);
		tab[2] = 0;
		while (tab[2] < tab[0])
		{
			length += ft_putchar(str[tab[2]]);
			tab[2]++;
		}
		tab[1] = 0;
		while (tab[1] <= (allign - (int)ft_strlen(str) + 1))
		{
			length += ft_putchar(' ');
			tab[1]++;
		}
	}
	else if (**(string) == 'f')
		point_util(string, args, length, allign);
}

static void	minus_util1(char **string, va_list args, int *length, int allign)
{
	char	c;
	int		tab[2];

	if (**(string) == 'd' || **(string) == 'i')
	{
		tab[1] = va_arg(args, int);
		length += ft_putnbr(tab[1]);
		tab[0] = 0;
		while (tab[0] < allign - (int)num_len(tab[1]))
		{
			length += ft_putchar(' ');
			tab[0]++;
		}
	}
	else if (**(string) == 'c')
	{
		c = va_arg(args, int);
		length += ft_putchar(c);
		tab[0] = 0;
		while ((allign - 1) > tab[0]++)
			length += ft_putchar(' ');
	}
}

static void	minus_util(char **string, va_list args, int *length, int allign)
{
	char	*str;
	int		k;
	int		i;
	int		limit;

	str = va_arg(args, char *);
	limit = allign_util(string);
	k = 0;
	while (k < limit)
	{
		length += ft_putchar(str[k]);
		k++;
	}
	i = 0;
	while (i < allign - (int)ft_strlen(str))
	{
		length += ft_putchar(' ');
		i++;
	}
}

void	print_minus(int *length, char **string, va_list args)
{
	int		allign;

	(*string)++;
	allign = allign_util(string);
	if (**(string) == '.')
		dash_point(string, args, length, allign);
	else if (**(string) == 'd' || **(string) == 'i' || **(string) == 'c')
		minus_util1(string, args, length, allign);
	else if (**(string) == 's')
		minus_util(string, args, length, allign);
	(*string)++;
}
