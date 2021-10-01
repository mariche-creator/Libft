/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <mchernyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 02:31:58 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/27 03:04:15 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c);

int main(int argc, char **argv)
{
    (void)argc;
    printf("Mine: %i\n", ft_isalpha(argv[1][0]));
    printf("Proper: %i\n", isalpha(argv[1][0]));
    return (0);
}
