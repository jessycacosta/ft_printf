/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:05:33 by jecosta           #+#    #+#             */
/*   Updated: 2024/11/21 15:22:11 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int n)
{
	long	nb;
	int		i;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		i = i + print_char('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		i = i + print_nbr(nb / 10);
		i = i + print_nbr(nb % 10);
	}
	else
	{
		i = i + print_char(nb + '0');
	}
	return (i);
}
