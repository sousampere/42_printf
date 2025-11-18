/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:16:26 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/07 17:24:36 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		if ((unsigned char) s1[i] == '\0')
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main() {
//     char s1[] = "Hello";
//     char s2[] = "Hello World";
//     int result1 = strncmp(s1, s2, 5);
//     int result2 = ft_strncmp(s1, s2, 5);
// 	printf("%d\n", result1);
// 	printf("%d\n", result2);
//     // Maintenant comparer plus de caractères
//     result1 = strncmp(s1, s2, 10);
//     result2 = ft_strncmp(s1, s2, 10);
// 	printf("%d\n", result1);
// 	printf("%d\n", result2);
//     // s1 < s2 (à cause du null terminator vs space)
//     if ((result1 < 0) != (result2 < 0)) return 1;
//     return 0;
// }