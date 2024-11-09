/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:26:50 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/09 15:41:47 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	lower(unsigned int decimalnumber)
{
	char	hexnumber[32];
	int		i;
	int		reverse_i;

	i = 0;
	if (decimalnumber == 0)
		return (ft_putchar('0'), 1);
	while (decimalnumber)
	{
		hexnumber[i++] = "0123456789abcdef"[decimalnumber % 16];
		decimalnumber /= 16;
	}
	reverse_i = i - 1;
	while (reverse_i >= 0)
	{
		ft_putchar(hexnumber[reverse_i]);
		reverse_i--;
	}
	return (i);
}

int	upper(unsigned int decimalnumber)
{
	char	hexnumber[32];
	int		i;
	int		reverse_i;
	int		remainder;

	i = 0;
	if (decimalnumber == 0)
		return (ft_putchar('0'), 1);
	while (decimalnumber != 0)
	{
		remainder = decimalnumber % 16;
		if (remainder < 10)
			hexnumber[i++] = 48 + remainder;
		else
			hexnumber[i++] = 55 + remainder;
		decimalnumber /= 16;
	}
	reverse_i = i - 1;
	while (reverse_i >= 0)
	{
		ft_putchar(hexnumber[reverse_i]);
		reverse_i--;
	}
	return (i);
}

int	find_specifier(char *string, va_list args)
{
	int	length;

	length = 0;
	if (*string == 'c')
		length += ft_putchar(va_arg(args, int));				//fetches from args "argument pointer the next argument that fits the type given"
	else if (*string == 's')
		length += ft_putstr(va_arg(args, char *));
	else if (*string == 'p')
		length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (*string == 'd' || *string == 'i')
		length += ft_putnbr(va_arg(args, int));
	else if (*string == 'u')
		length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (*string == 'x')
		length += lower(va_arg(args, unsigned int));
	else if (*string == 'X')
		length += upper(va_arg(args, unsigned int));
	else if (*string == '%')
		length += ft_putchar('%');
	else if (*string == 'o')
		length += decimal_to_octal(va_arg(args, unsigned int));
	else if (*string == 'f')
		length += put_float(va_arg(args, double), 6);
	return (length);
}

int ft_printf(const char *string, ...)
{
    int     length = 0;
    va_list args;
    int 	allign;

    allign = 0;
    va_start(args, string);
    while (*string)
    {
        if (*string == '%')
        {
            if (*(string + 1) == '#')
            {
                length += print_hash((char *)(string + 2), args);
                string += 3;
            }
            else if (*(string + 1) == '+')
            {
                if (*(string + 2) == 'd' || *(string + 2) == 'i')
                {
                    int num = va_arg(args, int);
                    if (num >= 0)
                        length += ft_putchar('+');
                    length += ft_putnbr(num);
                    string += 3;
                }
                else if (*(string + 2) == 'f')
                {
                    double num = va_arg(args, double);
                    if (num >= 0)
                        length += ft_putchar('+');
                    length += put_float(num, 6);
                    string += 3;
                }
                else
                    string += 2;
            }
	    else if (*(string + 1) == ' ')
	    {
		if (*(string + 2) == 'd' || *(string + 2) == 'i' || *(string + 2) == 'f')
		{
		    int num = va_arg(args, int);
		    if (num >= 0)
			length += ft_putchar(' ');
		    length += ft_putnbr(num);
		    string += 3;
		    
	    	}
	    }
	    else if (ft_isdigit(*(string + 1)))
	    {
		    while (ft_isdigit(*(string + 1)))
		    {
			    allign = allign * 10 + (*(string + 1) - '0');
			    string++;
		    }
		    int num = va_arg(args, int);
		    int i = 0;
		    while (i < allign - num_len(num))
		    {
			    length += ft_putchar(' ');
			    i++;
		    }
		    length += find_specifier((char *)(string + 1), args);
		    string += 2;
	    }
            else
            {
                length += find_specifier((char *)(string + 1), args);
                string += 2;
            }
        }
        else
        {
            length += ft_putchar(*string);
            ++string;
        }
    }
    va_end(args);
    return length;
}
//search tommorow a way to send the address of the string without using structs of global variable
//another way is to use a static iterator
