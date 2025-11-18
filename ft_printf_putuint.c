/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putuint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:07:34 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/18 13:49:07 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putuint(unsigned int n)
{
	char	c;
	int		count;

	if (n == 4294967295)
		return (write(1, "4294967295", 10));
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
