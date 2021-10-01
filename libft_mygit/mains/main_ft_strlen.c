/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <mchernyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 06:38:08 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/27 06:43:14 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s);

int main(int argc, char **argv)
{
    (void)argc;
    printf("%lu\n", ft_strlen(*(argv + 1)));
    printf("%lu\n", strlen(*(argv + 1)));
}
