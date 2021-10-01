/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 20:45:34 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/30 14:27:02 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

int main(void)
{
	char one[3] = "hel";
	char two[5] = "HELLO";
	char one1[3] = "hel";
	char two1[5] = "HELLO";

	size_t result = ft_strlcat(two, one, 5);
	printf("Mine: %lu\n", result);
	result = strlcat(two1, one1, 5);
	printf("Proper: %lu\n", result);
	for (int i = 0; two[i] != '\0'; i++)
		 write(1, &two[i], 1);
	write(1, "\n", 1);
	for (int i = 0; two1[i] != '\0'; i++)
		 write(1, &two1[i], 1);
	write(1, "\n", 1);
	return (0);
}
