/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:56:56 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/30 15:18:10 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c);

int main(void)
{
	char s[] = "ABCBD";
	char c = 'B';
	char *f = ft_strchr(s, c);
	printf("Mine: %c\n", *f);
	printf("Mine: %p\n", &f);
	f = strchr(s, c);
	printf("Proper: %c\n", *f);
	printf("Mine: %p\n", &f);
}
