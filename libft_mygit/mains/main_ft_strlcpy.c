/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 06:25:23 by mariche           #+#    #+#             */
/*   Updated: 2021/09/28 06:42:56 by mariche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    (void)argc;
    char dest[8];

    int i = strlcpy(dest, *(argv + 1), 8);
    printf("%i\n", i);
    for (int i = 0; i < 8; i++)
        write(1, &dest[i], 1);
    return (0);
}
