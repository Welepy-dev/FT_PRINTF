/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:34:37 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/09 15:04:12 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <math.h>

int main(void)
{
    ft_printf("custom printf: %+d\n", 42);
    printf("original printf: %+d\n", 42);
    return (0);
}
