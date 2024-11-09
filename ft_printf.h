/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:23:04 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/09 13:32:26 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <limits.h>
# include <ctype.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdbool.h>

int	decimal_to_octal(unsigned int decimal_number);
int	find_specifier(char *string, va_list args);
int 	print_hash(char *string, va_list args);
int	ft_print_ptr(unsigned long long ptr);
int	ft_printf(const char *string, ...);
int	upper(unsigned int decimalNumber);
int	lower(unsigned int decimalNumber);
int	ft_print_unsigned(unsigned int n);
int 	put_float(float n, int precision);
int	ft_num_len(unsigned int num);
int	ft_ptr_len(uintptr_t num);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int n);

bool in_range(int c, int min, int max);
bool  ft_isdigit(int c);

size_t	ft_strlen(const char *s);

char	*ft_uitoa(unsigned int n);

void	ft_put_ptr(uintptr_t num);

size_t num_len(int n);

#endif
