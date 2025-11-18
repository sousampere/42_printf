/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:47:58 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/18 18:36:50 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include "limits.h"

char	*make_str_hex_address(char *str)
{
	char	*hex_str;
	int		i;
	int		ii;
	int		len;

	hex_str = ft_calloc(50, sizeof(char));
	len = ft_strlen(str);
	hex_str[0] = '0';
	hex_str[1] = 'x';
	i = 2;
	// while (i + len < 10)
	// 	hex_str[i++] = 'F';
	ii = 0;
	while (len + 1 > i - 1)
	{
		hex_str[len + 1] = str[ii];
		ii++;
		len--;
	}
	hex_str[ft_strlen(str) + 2] = '\0';
	return (hex_str);
}

int	ft_printf_putptr(unsigned long n)
{
	int		i;
	char	str[50];
	char	*hex_base;
	char	*hex_address;

	if (n == 0)
		return (write(1, "(nil)", 5));
	hex_base = "0123456789abcdef";
	i = -1;
	while (n > 0)
	{
		str[++i] = hex_base[n % 16];
		n /= 16;
	}
	str[++i] = '\0';
	hex_address = make_str_hex_address(str);
	i = write(1, hex_address, ft_strlen(hex_address));
	free(hex_address);
	return (i);
}
