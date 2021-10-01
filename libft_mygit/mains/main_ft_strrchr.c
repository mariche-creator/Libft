/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:56:56 by mchernyu          #+#    #+#             */
/*   Updated: 2021/09/30 15:34:21 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c);
char *ft_strchr(const char *s, int c);

int main(void)
{
	char s[] = "ABCBD";
	char c = 'B';
	char *f = ft_strrchr(s, c);
	char *fbeg = ft_strchr(s, c);
	printf("Mine first: %p\n", &fbeg);
	printf("Mine last: %p\n", &f);
	printf("Mine value: %c\n", *f);
	printf("Mine found: %p\n", &f);
	f = strrchr(s, c);
	printf("Proper first: %p\n", &fbeg);
	printf("Proper last: %p\n", &f);
	printf("Proper value: %c\n", *f);
	printf("Mine found: %p\n", &f);
}
