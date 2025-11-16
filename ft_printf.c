/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:28:30 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/16 19:35:10 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

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
			if (str[i] == 'c' || str[i] == 's' || str[i] == 'p' ||
			str[i] == 'd' || str[i] == 'i' || str[i] == 'u' ||
			str[i] == 'x' || str[i] == 'X' || str[i] == '%')
				count++;
		}
		i++;
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;

	va_start(args, s);
	while ()
	va_end(args);
}
