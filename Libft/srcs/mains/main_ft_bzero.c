/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <mchernyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 07:20:18 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/27 23:31:31 by mariche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void *ft_bzero(void *s, size_t n);

int main(int argc, char **argv)
{
    (void)argc;
    char *temp = *(argv + 1);

    ft_bzero(temp, 3);
    for (int i = 0; i < 5; i++)
    {
        write(1, &temp[i], 1);
    }
    temp = *(argv + 1);
    bzero(temp, 3);
    for (int i = 0; i < 5; i++)
    {
        write(1, &temp[i], 1);
    }
}
