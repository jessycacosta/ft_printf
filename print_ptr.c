/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:10:47 by jecosta           #+#    #+#             */
/*   Updated: 2024/11/21 15:22:35 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_recursive(unsigned long n, char *str);

int	print_ptr(void *ptr, char *str)
{
	int				count;
	unsigned long	n;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	n = (unsigned long)ptr;
	write(1, "0x", 2);
	count = 2 + ptr_recursive(n, str);
	return (count);
}

int	ptr_recursive(unsigned long n, char *str)
{
	int	count;

	count = 0;
	if (n >= 16)
		count = count + ptr_recursive((n / 16), str);
	write (1, &str[n % 16], 1);
	count++;
	return (count);
}
