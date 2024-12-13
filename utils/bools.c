/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:04:15 by marcsilv          #+#    #+#             */
/*   Updated: 2024/12/13 19:20:19 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

bool	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

bool	in_range(int c, int min, int max)
{
	return (c >= min && c <= max);
}

bool	is_negative(int n)
{
	return (n < 0);
}
