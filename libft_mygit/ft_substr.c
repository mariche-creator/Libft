/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:49:45 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/19 20:02:28 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*specialcopy(char *dest, const char *src, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	strlen;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (len > strlen)
		len = strlen;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	if (start > strlen)
	{
		result[0] = '\0';
		return (result);
	}	
	specialcopy(result, &s[start], len);
	return (result);
}

static char	*specialcopy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
