/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:38:00 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/01 10:19:32 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *d, int c, size_t n)
{
	size_t	i;

	i = 0;
	unsigned char *f = (unsigned char *)d;
	while (i <= n)
	{
		if (f[i] == (unsigned char)c)
			return (&f[i]);
		i++;
	}
		return (NULL);
}
