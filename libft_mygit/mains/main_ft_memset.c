/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <mchernyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 07:20:18 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/27 08:03:53 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n);

int main(int argc, char **argv)
{
    (void)argc;
    char *temp = *(argv + 1);

    int c = 58;
    ft_memset(temp, c, 3);
    printf("%s\n", temp);
    temp = *(argv + 1);
    memset(temp, c, 3);
    printf("%s\n", temp);
}
