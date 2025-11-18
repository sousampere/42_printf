/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:47:58 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/03 15:12:35 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (char) c;
	if (c == '\0')
		return ((char *) s + ft_strlen(s));
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	printf("ft_strchr\t: ");
// 	char s[] = "tripouille";
// 	printf("%s", ft_strchr(s, 'r' + 256));
// }
