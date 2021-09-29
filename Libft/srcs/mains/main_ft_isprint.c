/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <mchernyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 02:31:58 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/27 06:29:21 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c);

int main(void)
{
    int c;
    for(c = 1; c <= 127; ++c)
        if (isprint(c)!= 0)
            printf("%c ", c);
    printf("\n");
    for(c = 1; c <=127; ++c)
        if (ft_isprint(c) != 0)
            printf("%c ", c);
    printf("\n");
    return 0;
}
