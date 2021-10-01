/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <mchernyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 02:31:58 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/27 05:32:40 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c);

int main(int argc, char **argv)
{
    (void)argc;
    printf("Mine: %i\n", ft_isalnum(argv[1][0]));
    printf("Proper: %i\n", isalnum(argv[1][0]));
    return (0);
}
