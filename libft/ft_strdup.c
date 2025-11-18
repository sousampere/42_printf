/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:33:42 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/06 15:27:32 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	strlen;
	char	*new_str;
	size_t	i;

	i = 0;
	strlen = ft_strlen(s);
	new_str = ft_calloc(strlen + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while (i < strlen && new_str != NULL)
	{
		new_str[i] = s[i];
		i++;
	}
	return (new_str);
}
