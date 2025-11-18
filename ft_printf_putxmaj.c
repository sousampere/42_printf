/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putxmaj.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:06:46 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/18 19:46:08 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	put_hex_positive(long value)
{
	int		i;
	char	str[10];
	char	*hex_tab;

	i = 8;
	str[9] = '\0';
	hex_tab = "0123456789ABCDEF";
	while (value > 0)
	{
		str[i] = hex_tab[value % 16];
		value /= 16;
		if (value == 0)
			return (write(1, &str[i], 9 - i));
		i--;
	}
	return (0);
}

static int	put_hex_negative(long value)
{
	int		i;
	char	str[10];
	char	*hex_tab;

	i = 8;
	str[9] = '\0';
	if (value < 0)
	{
		ft_memset(&str[0], 'F', 10);
		hex_tab = "FEDCBA9876543210";
		value *= -1;
		value -= 1;
	}
	while (value > 0)
	{
		str[i] = hex_tab[value % 16];
		value /= 16;
		if (value == 0)
			return (write(1, &str[1], 8));
		i--;
	}
	return (0);
}

int	ft_printf_putxmaj(long value)
{
	if (value > 0)
		return (put_hex_positive(value));
	if (value == 0)
		return (ft_printf_putnbr(0));
	return (put_hex_negative(value));
}
