/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <mchernyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 07:20:18 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/28 00:53:19 by mariche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main(int argc, char **argv)
{
    (void)argc;
    char *temp = *(argv + 1);
    char dst[5];
    int tmp[5] = {1, 2, 3, 4, 5};
    int dest[5];

    ft_memcpy(dst, temp, 3);
    printf("%s\n", dst);
    temp = *(argv + 1);
    memcpy(dst, temp, 3);
    printf("%s\n", dst);
    ft_memcpy(dest, tmp, 3);
    for (int i = 0; i < 5; i++)
    {
        printf("Mine: %i\n", dest[i]);
    }
    memcpy(dest, tmp, 3);
    for (int i = 0; i < 5; i++)
    {
        printf("Proper: %i\n", dest[i]);
    }
}
