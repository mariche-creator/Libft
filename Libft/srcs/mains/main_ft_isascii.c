/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <mchernyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 02:31:58 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/27 06:02:17 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c);

int main(void)
{
    int ch;
     
    for (ch = 0x7c; ch <= 0x82; ch++)
    {
        printf("%#04x    ", ch);
        if (isascii(ch))
            printf("The character is %c\n", ch);
        else
            printf("Cannot be represented by an ASCII character\n");
        printf("%#04x    ", ch);
        if (ft_isascii(ch))
            printf("The character is %c\n", ch);
        else
            printf("Cannot be represented by an ASCII character\n");
    }
          return 0;
}
