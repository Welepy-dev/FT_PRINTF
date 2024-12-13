/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:27:42 by welepy            #+#    #+#             */
/*   Updated: 2024/12/13 16:22:44 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	allign_util(char **string)
{
	int	allign;

	allign = 0;
	while (in_range(**(string), '0', '9'))
	{
		allign = allign * 10 + (**(string) - '0');
		(*string)++;
	}
	return (allign);
}

static void	put_float_util(int *length, int *integer, float *decimal)
{
	*length += ft_putchar('-');
	*integer *= -1;
	*decimal *= -1;
}

int	put_float(float n, int precision)
{
	int		tab[4];
	float	tab_float[2];

	tab[1] = (int)n;
	tab[0] = 0;
	tab[2] = 0;
	tab[3] = 0;
	tab_float[1] = 0.5;
	tab_float[0] = n - tab[1];
	if (n < 0)
		put_float_util(&tab[0], &tab[1], &tab_float[0]);
	tab[0] += ft_putnbr(tab[1]);
	tab[0] += ft_putchar('.');
	while (tab[2]++ < precision)
		tab_float[1] /= 10;
	tab[2] = 0;
	tab_float[0] += tab_float[1];
	while (tab[2]++ < precision)
	{
		tab_float[0] *= 10;
		tab[3] = (int)tab_float[0];
		tab[0] += ft_putnbr(tab[3]);
		tab_float[0] -= tab[3];
	}
	return (tab[0]);
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
