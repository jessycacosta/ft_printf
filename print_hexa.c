/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:09:23 by jecosta           #+#    #+#             */
/*   Updated: 2024/11/21 15:21:31 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count = count + print_hexa(n / 16, base);
	write(1, &base[n % 16], 1);
	count++;
	return (count);
}
