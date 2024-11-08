/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:02:50 by marcsilv          #+#    #+#             */
/*   Updated: 2024/06/05 13:19:15 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
printf("|%#x|\n", 255);     for hexadecimal values # adds a 0x or 0X prefix  // Output: |0xff|
printf("|%#x|\n", 10);     for hexadecimal values # adds a 0  prefix// Output: |012|
printf("|%#f|\n", 5.0);     # ensures a decimal point is always displayed, even if there are no decimals.// Output: |5.000000|
printf("|%#.0f|\n", 5.0);    // Output: |5.|
printf("|%#.0f|\n", 5.25);   // Output: |5.|
printf("|%#.2f|\n", 5.0);    // Output: |5.00|
*/

#include "ft_printf.h"

int	print_hash(char *string, va_list args)
{
	int	lenght;

	lenght = 0;
	if (*string == x)
		lenght += lower(va_arg(args, unsigned int));
	else if (*string == x)
		lenght += lower(va_arg(args, unsigned int));
}