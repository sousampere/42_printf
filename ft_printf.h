/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:59:43 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/19 14:44:02 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...)__attribute__((format(printf, 1, 2)));

int	ft_printf_putstr(char *str);
int	ft_printf_putnbr(int nbr);
int	ft_printf_putchar(char c);
int	ft_printf_putptr(unsigned long n);
int	ft_printf_putxmin(long value);
int	ft_printf_putxmaj(long value);
int	ft_printf_putuint(unsigned int n);

#endif
