/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 01:05:33 by mariche           #+#    #+#             */
/*   Updated: 2021/09/28 01:45:41 by mariche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    i = n;
    if (dest < src)
        return (memcpy(dest, src, n));
    else
    {
        while (i <= n)
        {
            ((char *)dest)[i] = ((char *)src)[i];
            i--;
        }
    }
    return (dest);
}
