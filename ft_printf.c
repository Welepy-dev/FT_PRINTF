/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:26:50 by marcsilv          #+#    #+#             */
/*   Updated: 2024/11/10 23:05:38 by marcsilv         ###   ########.fr       */
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
		length += ft_putchar(va_arg(args, int));
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

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		allign;
	int		length;
	int		num;
	float	f_num;
	char *str;
	int	k;
	int	i;
	double	d_num;

	allign = 0;
	length = 0;
	num = 0;
	k = 0;
	i = 0;
	va_start(args, string);
	while (*string)
	{
		if (*string == '%')
		{
			if ((*(string + 1) == '#') && (*(string + 2) == '.'))
			{
				if ((*(string + 3) == '0') && (*(string + 4) == 'f'))
				{
					num = (int)va_arg(args, double);
					length += ft_putnbr(num);
					length += ft_putchar ('.');
					string += 5;
				}
				else if ((*(string + 3) == 'f'))
				{
					num = (int)va_arg(args, double);
					length += ft_putnbr(num);
					length += ft_putchar ('.');
					string += 4;
				}
				else if (in_range(*(string + 3), '1', '9'))
				{
					while (in_range(*(string + 3), '0', '9'))
					{
						allign = allign * 10 + (*(string + 3) - '0');
						string++;
					}
					if (*(string + 3) == 'f')
					{
						f_num = va_arg(args, double);
						length += put_float(num, allign);
						string += 4;
					}
				}
			}
			else if (*(string + 1) == '#')
			{
				length += print_hash((char *)(string + 2), args);
				string += 3;
			}
			else if (*(string + 1) == '.')
			{
				if ((*(string + 2) == '0') && (*(string + 3) == 'f'))
				{
					num = (int)va_arg(args, double);
					length += ft_putnbr(num);
					string += 4;
				}
				else if ((*(string + 2) == 'f'))
				{
					num = (int)va_arg(args, double);
					length += ft_putnbr(num);
					length += ft_putchar ('.');
					string += 3;
				}
				else if ((*(string + 2) == 's'))
				{
					while (in_range(*(string + 2), '0', '9'))
					{
						allign = allign * 10 + (*(string + 2) - '0');
						string++;
					}
					str = va_arg(args, char *);
					while (*str)
					{
						length += ft_putchar(*str);
						str++;
					}
					string += 3;
				}
				else if (in_range(*(string + 2), '1', '9'))
				{
					while (in_range(*(string + 2), '0', '9'))
					{
						allign = allign * 10 + (*(string + 2) - '0');
						string++;
					}
					if (*(string + 2) == 'f')
					{
						f_num = va_arg(args, double);
						length += put_float(num, allign);
						string += 3;
					}
					else if (*(string + 2) == 's')
					{
						str = va_arg(args, char *);
						k = 0;
						while (k < allign)
						{
							length += ft_putchar(str[k]);
							k++;
						}
						string += 3;
					}
				}
			}
			else if (*(string + 1) == '+')
			{
				if (*(string + 2) == 'd' || *(string + 2) == 'i')
				{
					num = va_arg(args, int);
					if (num >= 0)
						length += ft_putchar('+');
					length += ft_putnbr(num);
					string += 3;
				}
				else if (*(string + 2) == 'f')
				{
					d_num = va_arg(args, double);
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
					num = va_arg(args, int);
					if (num >= 0)
					{
						length += ft_putchar(' ');
						length += ft_putnbr(num);
					}
					else
						length += ft_putnbr(num);
					string += 3;
				}
				else if (in_range(*(string + 2), '1', '9'))
				{
					num = va_arg(args, int);
					while (in_range(*(string + 2), '1', '9'))
					{
						allign = allign * 10 + (*(string + 2) - '0');
						string++;
					}
					while (allign-- > num_len(num))
						length += ft_putchar(' ');
					length += ft_putnbr(num);
					string += 3;
				}
				else if (*(string + 2) == '0' && (*(string + 3) == 'd' || *(string + 3) == 'i'))
					length += ft_putnbr(va_arg(args, int));
			}
			else if (*(string + 1) == '0')
			{
				while (ft_isdigit(*(string + 2)))
				{
					allign = allign * 10 + (*(string + 2) - '0');
					string++;
				}
				num = va_arg(args, int);
				i = 0;
				while (i <= allign - num_len(num))
				{
					ft_putchar('0');
					i++;
				}
				if (*(string + 2) == 'd' || *(string + 2) == 'i')
					length += ft_putnbr(num);
				else if (*(string + 2) == 'c')
					length += ft_putchar(num);
				else if (*(string + 2) == 's')
				{
					char *str = va_arg(args, char *);
					while (*str)
					{
						length += ft_putchar(*str);
						str++;
					}
				}
				else if (*(string + 2) == 'f')
				{
					float n = va_arg(args, double);
					int integer = (int)n;
					float decimal = n - (float)integer;
					length += ft_putnbr(integer);
					length += ft_putchar('.');
					decimal += 0.5;
					length += ft_putnbr(decimal);
				}
				else if (*(string + 2) == 'x')
					length += lower(num);
				else if (*(string + 2) == 'X')
					length += upper(num);
				string += 3;
			}
			else if (ft_isdigit(*(string + 1)))
			{
				i = 0;
				int limit = 0;
				while (ft_isdigit(*(string + 1)))
				{
					allign = allign * 10 + (*(string + 1) - '0');
					string++;
				}
				if (*(string + 1) == '.')
				{
					while (ft_isdigit(*(string + 2)))
					{
						limit =  limit * 10 + (*(string + 2) - '0');
						string++;
					}
					if (*(string + 2) == 's')
					{
						char *str = va_arg(args, char *);
						k = 0;

						while (k < limit)
						{
							length += ft_putchar(str[k]);
							k++;
						}
						i = 0;
						while (i <= (allign - ft_strlen(str) + 1))
						{
							length += ft_putchar(' ');
							i++;
						}
						string += 3;
					}
					else if (*(string + 2) == 'f')
					{
						i = 0;
						float n = va_arg(args, double);
						int integer = (int)n;
						float decimal = n - (float)integer;
						while (i < ((allign - (num_len(integer) + 1)) - limit))
						{
							length += ft_putchar(' ');
							i++;
						}
						while (limit--)
							decimal *= 10;
						length += ft_putnbr(integer);
						length += ft_putchar('.');
						decimal += 0.5;
						length += ft_putnbr(decimal);
						string += 1;
					}
				}
				if (*(string + 1) == 'd' || *(string + 1) == 'i')
				{
					num = va_arg(args, int);
					while (i < allign - num_len(num))
					{
						length += ft_putchar(' ');
						i++;
					}
					length += ft_putnbr(num);
				}
				else if (*(string + 1) == 'c')
				{
					while (i < allign - 1)
					{
						length += ft_putchar(' ');
						i++;
					}
					char c = va_arg(args, int);
					length += ft_putchar(c);
				}
				else if (*(string + 1) == 's')
				{
					char *str = va_arg(args, char *);
					while (i < allign - ft_strlen(str))
					{
						length += ft_putchar(' ');
						i++;
					}
					while (*str)
					{
						length += ft_putchar(*str);
						str++;
					}
				}
				string += 2;
			}
			else if (*(string + 1) == '-')
			{
				int limit = 0;
				while (ft_isdigit(*(string + 2)))
				{
					allign = allign * 10 + (*(string + 2) - '0');
					string++;
				} 
				if (*(string + 2) == '.')
				{
					while (ft_isdigit(*(string + 3)))
					{
						limit =  limit * 10 + (*(string + 3) - '0');
						string++;
					}
					if (*(string + 3) == 's')
					{
						char *str = va_arg(args, char *);
						k = 0;
						while (k < limit)
						{
							length += ft_putchar(str[k]);
							k++;
						}
						i = 0;
						while (i <= (allign - ft_strlen(str) + 1))
						{
							length += ft_putchar(' ');
							i++;
						}
						string += 4;
					}
					else if (*(string + 3) == 'f')
					{
						i = 0;
						float n = va_arg(args, double);
						int integer = (int)n;
						float decimal = n - (float)integer;
						while (limit--)
							decimal *= 10;
						length += ft_putnbr(integer);
						length += ft_putchar('.');
						decimal += 0.5;
						length += ft_putnbr(decimal);
						string += 4;
						while (i < (allign - (num_len(decimal) + num_len(integer) + 1)))
						{
							length += ft_putchar(' ');
							i++;
						}
					}
				}
				else if (*(string + 2) == 'd' || *(string + 2) == 'i')
				{
					num = va_arg(args, int);
					length += ft_putnbr(num);
					i = 0;
					while (i < allign - num_len(num))
					{
						length += ft_putchar(' ');
						i++;
					}
					string += 3;
				}
				else if (*(string + 2) == 'c')
				{
					char c = va_arg(args, int);
					length += ft_putchar(c);
					i = 0;
					while (i < allign - 1)
					{
						length += ft_putchar(' ');
						i++;
					}
					string += 3;
				}
				else if (*(string + 2) == 's')
				{
					char *str = va_arg(args, char *);
					k = 0;
					write(1, "teste\n", 6);
					while (k < limit)
					{
						length += ft_putchar(str[k]);
						k++;
					}
					i = 0;
					while (i < allign - ft_strlen(str))
					{
						length += ft_putchar(' ');
						i++;
					}
					string += 3;
				}
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
/*search tommorow a way to send the address of the string without using structs of global variable
another way is to use a static iterator*/
