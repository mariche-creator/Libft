/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:38:00 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/18 15:39:22 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *d, int c, size_t n)
{
	size_t			i;
	unsigned char	*f;

	i = 0;
	f = (unsigned char *)d;
	while (i < n)
	{
		if ((unsigned char)f[i] == (unsigned char)c)
			return (&f[i]);
		i++;
	}
	return (NULL);
}
