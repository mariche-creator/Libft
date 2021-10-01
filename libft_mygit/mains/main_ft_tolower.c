/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:34:17 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/30 14:42:58 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c);

int main(int argc, char **argv)
{
	(void) argc;

	printf("Mine: %c\n", ft_tolower(argv[1][0]));
	printf("Proper: %c\n", tolower(argv[1][0]));
}
