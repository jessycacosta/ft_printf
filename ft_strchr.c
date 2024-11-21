/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:09:54 by jecosta           #+#    #+#             */
/*   Updated: 2024/11/21 15:19:40 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	i;

	str = (char *)s;
	i = (char)c;
	while (*str != '\0')
	{
		if (*str == i)
			return (str);
		str++;
	}
	if (i == '\0')
		return (str);
	return (NULL);
}
