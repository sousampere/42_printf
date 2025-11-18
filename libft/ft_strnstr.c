/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:56:58 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/07 17:25:25 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	subi;

	i = 0;
	if ((little == NULL && len == 0) || (big == NULL && len == 0))
		return (NULL);
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			subi = 0;
			while (big[i + subi] == little[subi]
				&& i + subi < len && little[subi])
				subi++;
			if (little[subi] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}
