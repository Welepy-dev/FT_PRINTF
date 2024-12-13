/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:23:04 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/24 18:12:59 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdbool.h>
# include <stddef.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdio.h>
# include <ctype.h>

int		decimal_to_octal(unsigned int decimal_number);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printf(const char *string, ...);
int		upper(unsigned int decimalNumber);
int		put_float(float n, int precision);
int		lower(unsigned int decimalNumber);
int		ft_print_unsigned(unsigned int n);
int		ft_num_len(unsigned int num);
int		allign_util(char **string);
int		ft_ptr_len(uintptr_t num);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int n);

bool	in_range(int c, int min, int max);
bool	ft_isdigit(int c);

char	*ft_uitoa(unsigned int n);

void	dot(char **string, va_list args, char dot, int *length);
void	print_digits(int *length, char **string, va_list args);
void	print_space(int *length, char **string, va_list args);
void	print_zero(int *length, char **string, va_list args);
void	print_plus(char **string1, va_list args, int *length);
void	print_minus(int *length, char **string, va_list args);
void	hash(char **string, int *length, va_list args);
void	ft_put_ptr(uintptr_t num);

size_t	ft_strlen(const char *s);
size_t	num_len(int n);

#endif
