/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <mchernyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 07:20:18 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/28 02:42:09 by mariche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);

int main(int argc, char **argv)
{
    (void)argc;
    char *temp = *(argv + 1);
    char dst[5];

    ft_memmove(dst, temp, 3);
    printf("%s\n", dst);
    temp = *(argv + 1);
    memmove(dst, temp, 3);
    printf("%s\n", dst);
}
