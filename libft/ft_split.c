/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:47:30 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/07 17:26:19 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_words_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static size_t	get_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static char	*get_string(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	len = 0;
	while (s[len] != c && s[len])
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i] != c && s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	**free_all(char **strings, size_t strings_number)
{
	size_t	i;

	i = 0;
	while (i < strings_number)
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	strings_i;
	char	**strings;

	if (s == NULL)
		return (NULL);
	strings = ft_calloc(sizeof(char *), (get_words_count(s, c) + 1));
	if (!strings)
		return (NULL);
	i = 0;
	strings_i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			strings[strings_i] = get_string(&s[i], c);
			if (!strings[strings_i])
				return (free_all(strings, strings_i));
			i += get_len(&s[i], c);
			strings_i++;
		}
	}
	return (strings);
}

// #include <stdio.h>
// #include <mcheck.h>
// #include <string.h>
// int main ()
// {
// 	char	**tab = ft_split(" Tripouille ", ' ');
// 	printf("%s\n", tab[1]);
// }