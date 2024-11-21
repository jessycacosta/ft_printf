/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:56:00 by jecosta           #+#    #+#             */
/*   Updated: 2024/11/21 15:21:51 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr_u(unsigned int n)
{
	long	nb;
	int		i;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		nb *= -1;
	}
	if (nb > 9)
	{
		i = i + print_nbr_u(nb / 10);
		i = i + print_nbr_u(nb % 10);
	}
	else
	{
		i = i + print_char(nb + '0');
	}
	return (i);
}
