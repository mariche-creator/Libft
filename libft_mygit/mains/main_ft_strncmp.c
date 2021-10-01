/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:49:31 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/01 16:56:21 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main(int argc, char ** argv)
{
	(void)argc;

	int n = ft_strncmp(*(argv + 1), *(argv + 2), 5);
	printf("Mine: %i\n", n);
	n = strncmp(*(argv + 1), *(argv + 2), 5);
	printf("Proper: %i\n", n);
}
