/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:26:38 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/27 16:29:29 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	print_space(int *length, char **str, va_list args)
{
	int	tab[2];
	double	d_num;

	tab[0] = 0;
	(*str)++;
	if (**(str) == 'd' || **(str) == 'i')
	{
		tab[0] = va_arg(args, int);
		if (tab[0] >= 0)
			length += ft_putchar(' ');
		length += ft_putnbr(tab[0]);
	}
	else if (**(str) == 'f')
	{
		d_num = va_arg(args, double);
		if (d_num >= 0)
			length += ft_putchar(' ');
		length += put_float(d_num, 6);
	}
	else if (**(str) == '0')
	{
		(*str)++;
		if (**(str) == 'i' || **(str) == 'd')
		{
			tab[0] = va_arg(args, int);
			if (tab[0] >= 0)
				length += ft_putchar(' ');
			length += ft_putnbr(tab[0]);
		}
		else if (**(str) == 'f')
		{
			d_num = va_arg(args, double);
			if (d_num >= 0)
				length += ft_putchar(' ');
			length += put_float(d_num, 6);
		}
	}
	else if (ft_isdigit(**(str)))
	{
		tab[0] = va_arg(args, int);
		tab[1] = allign_util(str);
		while (tab[1]-- > (int)num_len(tab[0]))
			length += ft_putchar(' ');
		length += ft_putnbr(tab[0]);					//" % 10d/f | % 10.3s/d/f"
	}
	(*str)++;
}
