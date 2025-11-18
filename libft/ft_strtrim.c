/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:09:50 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/07 17:24:56 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	get_len(char const *s1, const char *set)
{
	size_t	i;
	size_t	subi;
	size_t	len;

	i = 0;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	len = 0;
	while (s1[i])
	{
		if (is_in_set(s1[i], set))
		{
			subi = 0;
			while (s1[i + subi] && is_in_set(s1[i + subi], set))
				subi++;
			if (s1[i + subi] == '\0')
				return (len);
		}
		len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = get_len(s1, set);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0' && is_in_set(*s1, set))
		s1++;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	i;
// 	while (s1[i])
// 	{
// 	}
// }
// #include <stdlib.h>
// #include <string.h>
// #include "stdio.h"
// int main() {
//     char *s1 = "   Hello World   ";
//     char *set = " ";
//     char *result = ft_strtrim(s1, set);
// 	printf("%s|||\n", result);
//     if (result == NULL) return 1;
//     if (strcmp(result, "Hello World") != 0) {
//         free(result);
//         return 1;
//     }
//     free(result);
//     return 0;
// }
// #include "stdio.h"
// int main()
// {
// 	printf("%d", get_len("     Hel    l o ", "\t "));
// }