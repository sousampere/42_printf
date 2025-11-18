/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:51:37 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/06 21:58:28 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft(unsigned int i, char *s)
// {
// 	if ('a' <= s[i] && s[i] <= 'z' && i % 2 == 0)
// 		s[i] = ft_toupper(s[i]);
// }

// void	iter(unsigned int i, char * s) {
// 	*s += i;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return ;
	if (f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// int main()
// {
// 	char	str[] = "0000000000";
// 	ft_striteri(str, iter);
// 	printf("%s", str);
// }