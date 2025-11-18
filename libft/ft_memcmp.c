/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:29:14 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/06 22:21:32 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *) s1)[i] != ((char *) s2)[i])
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main() {
//     char s1[] = "Hello";
//     char s2[] = "World";

//     int result1 = memcmp(s1, s2, 5);
//     int result2 = ft_memcmp(s1, s2, 5);

// 	printf("%d %d", result1, result2);

//     return 0;
// }