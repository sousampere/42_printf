/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:07:34 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/17 11:14:30 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putnbr(int n)
{
	char	c;
	int		count;

	if (n == -2147483648)
		return (write(1, "-2147483648", 12));
	if (n == 2147483647)
		return (write(1, "2147483647", 11));
	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		count++;
	}
	if (n >= 10)
		count += ft_printf_putnbr(n / 10);
	c = (n % 10) + 48;
	count += write(1, &c, 1);
	return (count);
}
