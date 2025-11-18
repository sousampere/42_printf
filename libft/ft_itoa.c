/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:09:57 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/07 17:22:19 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_strlen(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*case_zero(char	*str, int n)
{
	if (n == 0)
		str[0] = '0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	number;
	char	*str;
	int		i;
	int		sign;

	number = (long) n;
	i = get_strlen(number);
	sign = 1;
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	if (number < 0)
	{
		number *= -1;
		sign = -1;
	}
	str[i] = '\0';
	while (number > 0 && (i-- || 1 == 1))
	{
		str[i] = (number % 10) + 48;
		number /= 10;
	}
	if (sign < 0)
		str[i - 1] = '-';
	return (case_zero(str, n));
}

// #include <stdio.h>
// int main()
// {
// 	int	i = 0;
// 	printf("%d\n%s\n%d\n", i, ft_itoa(i), get_strlen(i));
// }