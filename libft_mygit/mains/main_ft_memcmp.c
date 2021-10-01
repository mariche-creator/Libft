/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:49:31 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/01 10:45:22 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(int argc, char **argv)
{
	(void)argc;

	int n = ft_memcmp(*(argv + 1), *(argv + 2), 4);
	printf("Mine: %i\n", n);
	n = memcmp(*(argv + 1), *(argv + 2), 4);
	printf("Proper: %i\n", n);
}
