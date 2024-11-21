/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:26:00 by jecosta           #+#    #+#             */
/*   Updated: 2024/11/21 15:20:00 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	find_format(const char *format, int i, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		result;

	i = 0;
	result = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			result = result + find_format(format, i, args);
			i++;
		}
		else
			result = result + print_char(format[i]);
		i++;
	}
	va_end(args);
	return (result);
}

int	find_format(const char *format, int i, va_list args)
{
	if (format[i + 1] == '%')
		return (print_char(format[i + 1]));
	else if (format[i + 1] == 'c')
		return (print_char(va_arg(args, int)));
	else if (format[i + 1] == 's')
		return (print_str(va_arg(args, char *)));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return (print_nbr(va_arg(args, int)));
	else if (format[i + 1] == 'u')
		return (print_nbr_u(va_arg(args, unsigned int)));
	else if (format[i + 1] == 'x' || format[i + 1] == 'X')
	{
		if (format[i + 1] == 'x')
			return (print_hexa(va_arg(args, unsigned int), "0123456789abcdef"));
		else
			return (print_hexa(va_arg(args, unsigned int), "0123456789ABCDEF"));
	}
	else if (format[i + 1] == 'p')
		return (print_ptr(va_arg(args, void *), "0123456789abcdef"));
	else
		return (0);
}
