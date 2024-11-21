/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:21:13 by jecosta           #+#    #+#             */
/*   Updated: 2024/11/21 15:20:55 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h> //used to write
# include <stdarg.h> //used to va_list

int		ft_printf(const char *format, ...);
int		print_char(char c);
int		print_nbr(int n);
int		print_nbr_u(unsigned int n);
int		print_str(char *str);
int		print_ptr(void *ptr, char *str);
int		print_hexa(unsigned int n, char *base);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);

#endif
