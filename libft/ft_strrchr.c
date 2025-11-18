/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:11:20 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/03 17:27:18 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	c = (char) c;
	if (c == 0)
	{
		while (*s)
			s++;
		return ((char *) s);
	}
	while (*s != '\0')
	{
		if (*s == c)
			result = ((char *)s);
		s++;
	}
	return (result);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s[] = "tripouille";
// 	printf("%s\n", ft_strrchr(s, 0));
// }