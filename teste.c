/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:34:37 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/10 22:01:37 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{

	printf("original printf: |%-5c| after char\n", 'A');
	ft_printf("custom   printf: |%-5c| after char\n", 'A');
	printf("----------------------------------------------\n");
}
/*    printf   ("original printf: |%5c| after char\n", 'B');
    ft_printf("custom   printf: |%5c| after char\n", 'B');
    printf("----------------------------------------------\n");

    printf   ("original printf: |%c| single char\n", 'C');
    ft_printf("custom   printf: |%c| single char\n", 'C');
    printf("----------------------------------------------\n");

    // String tests
    printf   ("original printf: |%10s| string\n", "Hello");
    ft_printf("custom   printf: |%10s| string\n", "Hello");
    printf("----------------------------------------------\n");

    printf   ("original printf: |%-10.3s| string\n", "Hello");
    ft_printf("custom   printf: |%-10.3s| string\n", "Hello");
    printf("----------------------------------------------\n");

    printf   ("original printf: |%.5s| string\n", "Hello, World!");
    ft_printf("custom   printf: |%.5s| string\n", "Hello, World!");
    printf("----------------------------------------------\n");

    // Pointer tests
    int x = 42;
    printf   ("original printf: |%p| pointer\n", &x);
    ft_printf("custom   printf: |%p| pointer\n", &x);
    printf("----------------------------------------------\n");

    // Decimal and integer tests
    printf   ("original printf: |%d| decimal\n", 123);
    ft_printf("custom   printf: |%d| decimal\n", 123);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%+d| decimal\n", 123);
    ft_printf("custom   printf: |%+d| decimal\n", 123);
    printf("----------------------------------------------\n");

    printf   ("original printf: |% 5d| decimal\n", 123);
    ft_printf("custom   printf: |% 5d| decimal\n", 123);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%-5d| decimal\n", -123);
    ft_printf("custom   printf: |%-5d| decimal\n", -123);
    printf("----------------------------------------------\n");

    // Unsigned tests
    printf   ("original printf: |%u| unsigned\n", 123456789);
    ft_printf("custom   printf: |%u| unsigned\n", 123456789);
    printf("----------------------------------------------\n");

    // Hexadecimal tests
    printf   ("original printf: |%#x| hex lowercase\n", 255);
    ft_printf("custom   printf: |%#x| hex lowercase\n", 255);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%#X| hex uppercase\n", 255);
    ft_printf("custom   printf: |%#X| hex uppercase\n", 255);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%08x| padded hex lowercase\n", 255);
    ft_printf("custom   printf: |%08x| padded hex lowercase\n", 255);   //is printing 255
    printf("----------------------------------------------\n");

    // Octal tests
    printf   ("original printf: |%#o| octal\n", 255);
    ft_printf("custom   printf: |%#o| octal\n", 255);
    printf("----------------------------------------------\n");

    // Float tests
    printf   ("original printf: |%10.3f| float\n", 123.4567);
    ft_printf("custom   printf: |%10.3f| float\n", 123.4567);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%-10.1f| float\n", 123.456789);
    ft_printf("custom   printf: |%-10.1f| float\n", 123.456789);
    printf("----------------------------------------------\n");
    printf("----------------------------------------------\n");

    // Percent test
    printf   ("original printf: |%%| percent sign\n");
    ft_printf("custom   printf: |%%| percent sign\n");
    printf("----------------------------------------------\n");

    return 0;
}
*/