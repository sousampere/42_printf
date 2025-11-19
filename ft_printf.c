/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:28:30 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/19 16:07:05 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	count_args(const char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			if (str[i] == 'c' || str[i] == 's' || str[i] == 'p'
				|| str[i] == 'd' || str[i] == 'i' || str[i] == 'u'
				|| str[i] == 'x' || str[i] == 'X' || str[i] == '%')
				count++;
		}
		i++;
	}
	return (count);
}

int	print_arg(va_list *arg, char c)
{
	if (c == 's')
		return (ft_printf_putstr(va_arg(*arg, char *)));
	if (c == 'd' || c == 'i')
		return (ft_printf_putnbr(va_arg(*arg, int)));
	if (c == 'c')
		return (ft_printf_putchar(va_arg(*arg, unsigned int)));
	if (c == 'p')
		return (ft_printf_putptr(va_arg(*arg, unsigned long)));
	if (c == '%')
		return (write(1, "%", 1));
	if (c == 'x')
		return (ft_printf_putxmin(va_arg(*arg, unsigned int)));
	if (c == 'X')
		return (ft_printf_putxmaj(va_arg(*arg, unsigned int)));
	if (c == 'u')
		return (ft_printf_putuint(va_arg(*arg, int)));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		pfvalue;

	va_start(args, s);
	i = -1;
	pfvalue = 0;
	while (s[++i])
	{
		if (s[i] != '%')
		{
			write(1, &s[i], 1);
			pfvalue++;
		}
		else
			pfvalue += print_arg(&args, s[++i]);
	}
	va_end(args);
	return (pfvalue);
}
