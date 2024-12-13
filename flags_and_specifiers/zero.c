/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:52:11 by marcsilv          #+#    #+#             */
/*   Updated: 2024/12/13 19:48:05 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	print_zero_util(va_list args, int *length)
{
	char	*str;

	str = va_arg(args, char *);
	while (*str)
	{
		length += ft_putchar(*str);
		str++;
	}
}

void	print_zero(int *length, char **string, va_list args)
{
	int	i[3];

	(*string)++;
	i[1] = 0;
	i[2] = va_arg(args, int);
	i[0] = allign_util(string);
	if (i[2] < 0 && !(**(string) == 'u' || **(string) == 'x' || **(string) == 'X'))
	{
		i[2] *= -1;
		i[0]--;
		if (i[2] == INT_MIN)
		{
			length += ft_putstr("-2147483648");
			(*string)++;
			return ;
		}
		length += ft_putchar('-');
	}
	if ((**(string) == 'u' || **(string) == 'x' || **(string) == 'X') && is_negative(i[2]))
		i[0] -= 3;
	else if ((**(string) == 'x' || **(string) == 'X') && i[2] > 16)
		i[0]++;
	while (i[1] < i[0] - (int)num_len(i[2]))
	{
		ft_putchar('0');
		i[1]++;
	}
	if (**(string) == 'd' || **(string) == 'i')
		length += ft_putnbr(i[2]);
	else if (**(string) == 'c')
		length += ft_putchar(i[2]);//check later
	else if (**(string) == 's')
		print_zero_util(args, length);
	else if (**(string) == 'x')
		length += lower(i[2]);
	else if (**(string) == 'X')
		length += upper(i[2]);
	else if (**(string) == 'u')
		length += ft_print_unsigned(i[2]);
	(*string)++;
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
