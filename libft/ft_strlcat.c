/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:40:18 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/07 17:19:21 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size < dstlen)
		return (size + srclen);
	while (ft_strlen(dst) < size - 1 && src[i])
	{
		dst[dstlen + i] = src[i];
		dst[dstlen + i + 1] = '\0';
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
