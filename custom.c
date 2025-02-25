/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:47:50 by codespace         #+#    #+#             */
/*   Updated: 2025/02/25 13:48:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
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