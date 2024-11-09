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

#include <stdio.h>
#include "ft_printf.h"
#include <math.h>

int main(void)
{
    // Character tests
    printf   ("original printf: |%-5c| after char\n", 'A');
    ft_printf("custom   printf: |%-5c| after char\n", 'A');		//is printing 65
    printf("----------------------------------------------\n");

    printf   ("original printf: |%5c| after char\n", 'B');
    ft_printf("custom   printf: |%5c| after char\n", 'B');		//is printing 66
printf("----------------------------------------------\n");
    printf   ("original printf: |%c| single char\n", 'C');
    ft_printf("custom   printf: |%c| single char\n", 'C');
printf("----------------------------------------------\n");
    // String tests
    printf   ("original printf: |%10s| string\n", "Hello");
    ft_printf("custom   printf: |%10s| string\n", "Hello");		//is printing 1475330435
printf("----------------------------------------------\n");
    printf   ("original printf: |%-10.3s| string\n", "Hello");
    ft_printf("custom   printf: |%-10.3s| string\n", "Hello");		//is printing 1475330433s
printf("----------------------------------------------\n");
    printf   ("original printf: |%.5s| string\n", "Hello, World!");
    ft_printf("custom   printf: |%.5s| string\n", "Hello, World!");	//is printing .5s
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
    //printf   ("original printf: |% 5d| decimal\n", 123);
    //ft_printf("custom   printf: |% 5d| decimal\n", 123);		//infinite loop
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
    // Octal tests
    printf   ("original printf: |%#o| octal\n", 255);
    ft_printf("custom   printf: |%#o| octal\n", 255);
printf("----------------------------------------------\n");
    // Float tests
    printf   ("original printf: |%10.2f| float\n", 123.456);
    ft_printf("custom   printf: |%10.2f| float\n", 123.456);		//is printing 14776285762f
printf("----------------------------------------------\n");
    printf   ("original printf: |%-10.3f| float\n", 123.456);
    ft_printf("custom   printf: |%-10.3f| float\n", 123.456);		//is printing 14776285763f
printf("----------------------------------------------\n");
    // Percent test
    printf   ("original printf: |%%| percent sign\n");
    ft_printf("custom   printf: |%%| percent sign\n");
printf("----------------------------------------------\n");
    return 0;
}
