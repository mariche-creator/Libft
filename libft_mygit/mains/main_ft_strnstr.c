/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:48:00 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/01 14:32:44 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int main(int argc, char **argv)
{
	(void)argc;

	char *mine = ft_strnstr(*(argv + 1), *(argv + 2), 5);
	printf("Mine: %p\n", mine);
	printf("%s\n", mine);
	char *proper = strnstr(*(argv + 1), *(argv + 2), 5);
	printf("Proper: %p\n", proper);
	printf("%s\n", proper);
}
