/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 05:12:21 by mariche           #+#    #+#             */
/*   Updated: 2021/09/29 18:51:43 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	const size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < size)
		memcpy(dst, src, srclen + 1);
	else if (size > 0)
	{
		memcpy(dst, src, size - 1);
		dst(size - 1) = '\0';
	}
	return (srclen);
}
