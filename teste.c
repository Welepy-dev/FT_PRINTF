/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:34:37 by marcsilv          #+#    #+#             */
/*   Updated: 2024/12/13 19:52:12 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("original printf |%01d| \n", 0);
	printf("original printf |%02d| \n", -1);
	printf("original printf |%04d| \n", 9);
	printf("original printf |%01d| \n", 10);
	printf("original printf |%02d| \n", 11);
	printf("original printf |%03d| \n", 15);
	printf("original printf |%04d| \n", 16);
	printf("original printf |%05d| \n", 17);
	printf("original printf |%01d| \n", 99);
	printf("original printf |%02d| \n", 100);
	printf("original printf |%03d| \n", 101);
	printf("original printf |%01d| \n", -9);
	printf("original printf |%02d| \n", -10);
	printf("original printf |%03d| \n", -11);
	printf("original printf |%04d| \n", -14);
	printf("original printf |%05d| \n", -15);
	printf("original printf |%06d| \n", -16);
	printf("original printf |%01d| \n", -99);
	printf("original printf |%02d| \n", -100);
	printf("original printf |%03d| \n", -101);
	printf("original printf |%09d| \n", INT_MAX);
	printf("original printf |%010d| \n", INT_MIN);
	printf("original printf |%01i| \n", 0);
	printf("original printf |%02i| \n", -1);
	printf("original printf |%03i| \n", 1);
	printf("original printf |%04i| \n", 9);
	printf("original printf |%01i| \n", 10);
	printf("original printf |%02i| \n", 11);
	printf("original printf |%03i| \n", 15);
	printf("original printf |%04i| \n", 16);
	printf("original printf |%05i| \n", 17);
	printf("original printf |%01i| \n", 99);
	printf("original printf |%02i| \n", 100);
	printf("original printf |%03i| \n", 101);
	printf("original printf |%01i| \n", -9);
	printf("original printf |%02i| \n", -10);
	printf("original printf |%03i| \n", -11);
	printf("original printf |%04i| \n", -14);
	printf("original printf |%05i| \n", -15);
	printf("original printf |%06i| \n", -16);
	printf("original printf |%01i| \n", -99);
	printf("original printf |%02i| \n", -100);
	printf("original printf |%03i| \n", -101);
	printf("original printf |%09i| \n", INT_MAX);
	printf("original printf |%010i| \n", INT_MIN);
	printf("original printf |%01u| \n", 0);
	printf("original printf |%02u| \n", -1);
	printf("original printf |%03u| \n", 1);
	printf("original printf |%04u| \n", 9);
	printf("original printf |%01u| \n", 10);
	printf("original printf |%02u| \n", 11);
	printf("original printf |%03u| \n", 15);
	printf("original printf |%04u| \n", 16);
	printf("original printf |%05u| \n", 17);
	printf("original printf |%01u| \n", 99);
	printf("original printf |%02u| \n", 100);
	printf("original printf |%03u| \n", 101);
	printf("original printf |%01u| \n", -9);
	printf("original printf |%02u| \n", -10);
	printf("original printf |%03u| \n", -11);
	printf("original printf |%04u| \n", -14);
	printf("original printf |%05u| \n", -15);
	printf("original printf |%06u| \n", -16);
	printf("original printf |%01u| \n", -99);
	printf("original printf |%02u| \n", -100);
	printf("original printf |%03u| \n", -101);
	printf("original printf |%09u| \n", INT_MAX);
	printf("original printf |%010u| \n", INT_MIN);
	printf("original printf |%01x| \n", 0);
	printf("original printf |%02x| \n", -1);
	printf("original printf |%03x| \n", 1);
	printf("original printf |%04x| \n", 9);
	printf("original printf |%01x| \n", 10);
	printf("original printf |%02x| \n", 11);
	printf("original printf |%03x| \n", 15);
	printf("original printf |%04x| \n", 16);
	printf("original printf |%05x| \n", 17);
	printf("original printf |%01x| \n", 99);
	printf("original printf |%02x| \n", 100);
	printf("original printf |%03x| \n", 101);
	printf("original printf |%01x| \n", -9);
	printf("original printf |%02x| \n", -10);
	printf("original printf |%03x| \n", -11);
	printf("original printf |%04x| \n", -14);
	printf("original printf |%05x| \n", -15);
	printf("original printf |%06x| \n", -16);
	printf("original printf |%01x| \n", -99);
	printf("original printf |%02x| \n", -100);
	printf("original printf |%03x| \n", -101);
	printf("original printf |%01X| \n", 0);
	printf("original printf |%02X| \n", -1);
	printf("original printf |%03X| \n", 1);
	printf("original printf |%04X| \n", 9);
	printf("original printf |%01X| \n", 10);
	printf("original printf |%02X| \n", 11);
	printf("original printf |%03X| \n", 15);
	printf("original printf |%04X| \n", 16);
	printf("original printf |%05X| \n", 17);
	printf("original printf |%01X| \n", 99);
	printf("original printf |%02X| \n", 100);
	printf("original printf |%03X| \n", 101);
	printf("original printf |%01X| \n", -9);
	printf("original printf |%02X| \n", -10);
	printf("original printf |%03X| \n", -11);
	printf("original printf |%04X| \n", -14);
	printf("original printf |%05X| \n", -15);
	printf("original printf |%06X| \n", -16);
	printf("original printf |%01X| \n", -99);
	printf("original printf |%02X| \n", -100);
	printf("original printf |%03X| \n", -101);

	ft_printf("custom printf   |%01d| \n", 0);
	ft_printf("custom printf   |%02d| \n", -1);
	ft_printf("custom printf   |%04d| \n", 9);
	ft_printf("custom printf   |%01d| \n", 10);
	ft_printf("custom printf   |%02d| \n", 11);
	ft_printf("custom printf   |%03d| \n", 15);
	ft_printf("custom printf   |%04d| \n", 16);
	ft_printf("custom printf   |%05d| \n", 17);
	ft_printf("custom printf   |%01d| \n", 99);
	ft_printf("custom printf   |%02d| \n", 100);
	ft_printf("custom printf   |%03d| \n", 101);
	ft_printf("custom printf   |%01d| \n", -9);
	ft_printf("custom printf   |%02d| \n", -10);
	ft_printf("custom printf   |%03d| \n", -11);
	ft_printf("custom printf   |%04d| \n", -14);
	ft_printf("custom printf   |%05d| \n", -15);
	ft_printf("custom printf   |%06d| \n", -16);
	ft_printf("custom printf   |%01d| \n", -99);
	ft_printf("custom printf   |%02d| \n", -100);
	ft_printf("custom printf   |%03d| \n", -101);
	ft_printf("custom printf   |%09d| \n", INT_MAX);
	ft_printf("custom printf   |%010d| \n", INT_MIN);
	ft_printf("custom printf   |%01i| \n", 0);
	ft_printf("custom printf   |%02i| \n", -1);
	ft_printf("custom printf   |%03i| \n", 1);
	ft_printf("custom printf   |%04i| \n", 9);
	ft_printf("custom printf   |%01i| \n", 10);
	ft_printf("custom printf   |%02i| \n", 11);
	ft_printf("custom printf   |%03i| \n", 15);
	ft_printf("custom printf   |%04i| \n", 16);
	ft_printf("custom printf   |%05i| \n", 17);
	ft_printf("custom printf   |%01i| \n", 99);
	ft_printf("custom printf   |%02i| \n", 100);
	ft_printf("custom printf   |%03i| \n", 101);
	ft_printf("custom printf   |%01i| \n", -9);
	ft_printf("custom printf   |%02i| \n", -10);
	ft_printf("custom printf   |%03i| \n", -11);
	ft_printf("custom printf   |%04i| \n", -14);
	ft_printf("custom printf   |%05i| \n", -15);
	ft_printf("custom printf   |%06i| \n", -16);
	ft_printf("custom printf   |%01i| \n", -99);
	ft_printf("custom printf   |%02i| \n", -100);
	ft_printf("custom printf   |%03i| \n", -101);
	ft_printf("custom printf   |%09i| \n", INT_MAX);
	ft_printf("custom printf   |%010i| \n", INT_MIN);
	ft_printf("custom printf   |%01u| \n", 0);
	ft_printf("custom printf   |%02u| \n", -1);
	ft_printf("custom printf   |%03u| \n", 1);
	ft_printf("custom printf   |%04u| \n", 9);
	ft_printf("custom printf   |%01u| \n", 10);
	ft_printf("custom printf   |%02u| \n", 11);
	ft_printf("custom printf   |%03u| \n", 15);
	ft_printf("custom printf   |%04u| \n", 16);
	ft_printf("custom printf   |%05u| \n", 17);
	ft_printf("custom printf   |%01u| \n", 99);
	ft_printf("custom printf   |%02u| \n", 100);
	ft_printf("custom printf   |%03u| \n", 101);
	ft_printf("custom printf   |%01u| \n", -9);
	ft_printf("custom printf   |%02u| \n", -10);
	ft_printf("custom printf   |%04u| \n", -11);
	ft_printf("custom printf   |%04u| \n", -14);
	ft_printf("custom printf   |%05u| \n", -15);
	ft_printf("custom printf   |%06u| \n", -16);
	ft_printf("custom printf   |%01u| \n", -99);
	ft_printf("custom printf   |%02u| \n", -100);
	ft_printf("custom printf   |%03u| \n", -101);
	ft_printf("custom printf   |%09u| \n", INT_MAX);
	ft_printf("custom printf   |%010u| \n", INT_MIN);
	ft_printf("custom printf   |%01x| \n", 0);
	ft_printf("custom printf   |%02x| \n", -1);
	ft_printf("custom printf   |%03x| \n", 1);
	ft_printf("custom printf   |%04x| \n", 9);
	ft_printf("custom printf   |%01x| \n", 10);
	ft_printf("custom printf   |%02x| \n", 11);	//problema
	ft_printf("custom printf   |%03x| \n", 15);	//problema
	ft_printf("custom printf   |%04x| \n", 16);
	ft_printf("custom printf   |%05x| \n", 17);
	ft_printf("custom printf   |%01x| \n", 99);
	ft_printf("custom printf   |%02x| \n", 100);
	ft_printf("custom printf   |%03x| \n", 101);
	ft_printf("custom printf   |%01x| \n", -9);
	ft_printf("custom printf   |%02x| \n", -10);
	ft_printf("custom printf   |%03x| \n", -11);
	ft_printf("custom printf   |%04x| \n", -14);
	ft_printf("custom printf   |%05x| \n", -15);
	ft_printf("custom printf   |%06x| \n", -16);
	ft_printf("custom printf   |%01x| \n", -99);
	ft_printf("custom printf   |%02x| \n", -100);
	ft_printf("custom printf   |%03x| \n", -101);
	ft_printf("custom printf   |%01X| \n", 0);
	ft_printf("custom printf   |%02X| \n", -1);
	ft_printf("custom printf   |%03X| \n", 1);
	ft_printf("custom printf   |%04X| \n", 9);
	ft_printf("custom printf   |%01X| \n", 10);
	ft_printf("custom printf   |%02X| \n", 11);	//problema
	ft_printf("custom printf   |%03X| \n", 15);	//problema
	ft_printf("custom printf   |%04X| \n", 16);
	ft_printf("custom printf   |%05X| \n", 17);
	ft_printf("custom printf   |%01X| \n", 99);
	ft_printf("custom printf   |%02X| \n", 100);
	ft_printf("custom printf   |%03X| \n", 101);
	ft_printf("custom printf   |%01X| \n", -9);
	ft_printf("custom printf   |%02X| \n", -10);
	ft_printf("custom printf   |%03X| \n", -11);
	ft_printf("custom printf   |%04X| \n", -14);
	ft_printf("custom printf   |%05X| \n", -15);
	ft_printf("custom printf   |%06X| \n", -16);
	ft_printf("custom printf   |%01X| \n", -99);
	ft_printf("custom printf   |%02X| \n", -100);
	ft_printf("custom printf   |%03X| \n", -101);

	ft_printf("custom printf   |%04d| \n", 9);
	ft_printf("custom printf   |%04d| \n", 16);
	ft_printf("custom printf   |%05d| \n", 17);
	
	return 0;
}

/*    ft_printf(" %+d \n", 0);
    ft_printf(" %+d \n", -1);
    ft_printf(" %+d \n", 9);
    ft_printf(" %+d \n", 10);
    ft_printf(" %+d \n", 11);
    ft_printf(" %+d \n", 15);
    ft_printf(" %+d \n", 16);
    ft_printf(" %+d \n", 17);
    ft_printf(" %+d \n", 99);
    ft_printf(" %+d \n", 100);
    ft_printf(" %+d \n", 101);
    ft_printf(" %+d \n", -9);
    ft_printf(" %+d \n", -10);
    ft_printf(" %+d \n", -11);
    ft_printf(" %+d \n", -14);
    ft_printf(" %+d \n", -15);
    ft_printf(" %+d \n", -16);
    ft_printf(" %+d \n", -99);
    ft_printf(" %+d \n", -100);
    ft_printf(" %+d \n", -101);
    ft_printf(" %+d \n", INT_MAX);
    ft_printf(" %+d \n", INT_MIN);
    ft_printf(" %+d \n", LONG_MAX);
    ft_printf(" %+d \n", LONG_MIN);
    ft_printf(" %+d \n", UINT_MAX);
    ft_printf(" %+d \n", ULONG_MAX);
    ft_printf(" %+d \n", 9223372036854775807LL);
    ft_printf(" %+d \n%+d \n%+d \n%+d \n%+d \n%+d \n%+d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %+i \n", 0);
    ft_printf(" %+i \n", -1);
    ft_printf(" %+i \n", 1);
    ft_printf(" %+i \n", 9);
    ft_printf(" %+i \n", 10);
    ft_printf(" %+i \n", 11);
    ft_printf(" %+i \n", 15);
    ft_printf(" %+i \n", 16);
    ft_printf(" %+i \n", 17);
    ft_printf(" %+i \n", 99);
    ft_printf(" %+i \n", 100);
    ft_printf(" %+i \n", 101);
    ft_printf(" %+i \n", -9);
    ft_printf(" %+i \n", -10);
    ft_printf(" %+i \n", -11);
    ft_printf(" %+i \n", -14);
    ft_printf(" %+i \n", -15);
    ft_printf(" %+i \n", -16);
    ft_printf(" %+i \n", -99);
    ft_printf(" %+i \n", -100);
    ft_printf(" %+i \n", -101);
    ft_printf(" %+i \n", INT_MAX);
    ft_printf(" %+i \n", INT_MIN);
    ft_printf(" %+i \n", LONG_MAX);
    ft_printf(" %+i \n", LONG_MIN);
    ft_printf(" %+i \n", UINT_MAX);
    ft_printf(" %+i \n", ULONG_MAX);
    ft_printf(" %+i \n", 9223372036854775807LL);
    ft_printf(" %+i \n%+i \n%+i \n%+i \n%+i \n%+i \n%+i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    
    int x = 42;
    printf   ("original printf: |%p| pointer\n", &x);
    ft_printf("custom   printf: |%p| pointer\n", &x);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%d| decimal\n", 123);
    ft_printf("custom   printf: |%d| decimal\n", 123);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%+d| decimal\n", 593);
    ft_printf("custom   printf: |%+d| decimal\n", 593);
    printf("----------------------------------------------\n");

    printf   ("original printf: |% 5d| decimal\n", 123);
    ft_printf("custom   printf: |% 5d| decimal\n", 123);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%-5d| decimal\n", -123);
    ft_printf("custom   printf: |%-5d| decimal\n", -123);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%u| unsigned\n", 123456789);
    ft_printf("custom   printf: |%u| unsigned\n", 123456789);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%#x| hex lowercase\n", 255);
    ft_printf("custom   printf: |%#x| hex lowercase\n", 255);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%#X| hex uppercase\n", 255);
    ft_printf("custom   printf: |%#X| hex uppercase\n", 255);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%08x| padded hex lowercase\n", 255);
    ft_printf("custom   printf: |%08x| padded hex lowercase\n", 255);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%#o| octal\n", 255);
    ft_printf("custom   printf: |%#o| octal\n", 255);
    printf("----------------------------------------------\n");
    
    printf   ("original printf: |%-10.1f| \n", 123.456789);
    ft_printf("custom   printf: |%-10.1f| \n", 123.456789);
    printf("----------------------------------------------\n");

    printf   ("original printf: |%%| percent sign\n");
    ft_printf("custom   printf: |%%| percent sign\n");
    printf("----------------------------------------------\n");
	char a = 'a';
    printf   ("original printf: |%01d| \n", -123);
    ft_printf("custom   printf: |%01d| \n", -123);
    printf("----------------------------------------------\n");
    printf   ("original printf: |%01d| \n", 0);
    ft_printf("custom   printf: |%01d| \n", 0);
    printf("----------------------------------------------\n");
    printf   ("original printf: |% f| \n", -123.456);
    ft_printf("custom   printf: |% f| \n", -123.456);
    printf("----------------------------------------------\n");
    printf   ("original printf: |% d| \n", -123);
    ft_printf("custom   printf: |% d| \n", -123);
    printf("----------------------------------------------\n");
    printf   ("original printf: |% f| \n", -123.456789);
    ft_printf("custom   printf: |% f| \n", -123.456789);
    printf("----------------------------------------------\n");
    printf   ("original printf: |%.2s| \n", "123.456");
    ft_printf("custom   printf: |%.2s| \n", "123.456");
    printf("----------------------------------------------\n");
    printf   ("original printf: |%.10f| \n", 123.4567);
    ft_printf("custom   printf: |%.10f| \n", 123.4567);
    printf("----------------------------------------------\n");
    printf   ("original printf: |%#x| \n", 123);
    ft_printf("custom   printf: |%#x| \n", 123);
    printf("----------------------------------------------\n");
    printf   ("original printf: |%#X| \n", 123);
    ft_printf("custom   printf: |%#X| \n", 123);
    printf("----------------------------------------------\n");
    printf   ("original printf: |%#f| \n", 123.456);
    ft_printf("custom   printf: |%#f| \n", 123.456);           //averiguar
    printf("----------------------------------------------\n");
    */