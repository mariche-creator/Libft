/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:56:56 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/01 10:21:33 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *d, int c, size_t n);

int main(void)
{
	char s[] = "ABCBD";
	char c = 'E';
	unsigned int *f = ft_memchr(s, c, 4);
	printf("Mine: %u\n", *f);
	printf("Mine: %p\n", &f);
	f = memchr(s, c, 4);
	printf("Proper: %u\n", *f);
	printf("Mine: %p\n", &f);
}
