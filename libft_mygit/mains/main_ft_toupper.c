/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:34:17 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/30 14:39:09 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c);

int main(int argc, char **argv)
{
	(void) argc;

	printf("Mine: %c\n", ft_toupper(argv[1][0]));
	printf("Proper: %c\n", toupper(argv[1][0]));
}
