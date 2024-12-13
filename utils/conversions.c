/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:05:35 by marcsilv          #+#    #+#             */
/*   Updated: 2024/12/13 16:22:06 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_uitoa(unsigned int n)
{
	int		len;
	char	*num;

	len = ft_num_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	decimal_to_octal(unsigned int decimal_number)
{
	int	length;
	int	octal_number;
	int	remainder;
	int	i;

	length = 0;
	octal_number = 0;
	i = 1;
	while (decimal_number != 0)
	{
		remainder = decimal_number % 8;
		decimal_number /= 8;
		octal_number += remainder * i;
		i *= 10;
		length++;
	}
	ft_putnbr(octal_number);
	return (length);
}
