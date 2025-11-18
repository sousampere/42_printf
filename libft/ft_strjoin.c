/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:52:39 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/06 22:07:48 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	size_t	i;
	size_t	stringlen;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!string)
		return (NULL);
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = '\0';
	i = 0;
	while (s2[i])
	{
		stringlen = ft_strlen(string);
		string[stringlen] = s2[i];
		string[stringlen + 1] = '\0';
		i++;
	}
	return (string);
}

// #include <stdio.h>
// int main()
// {
// 	char s1[] = "salut";
// 	char s2[] = " world";
// 	printf("%s\n", ft_strjoin(s1, s2));
// }