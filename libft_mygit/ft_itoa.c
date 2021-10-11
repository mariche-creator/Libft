/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:37:33 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/11 10:53:26 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int length(int n);
static char *ft_placement(char *s, int n);

char *ft_itoa(int n)
{
	size_t i;
	char *result;
	int temp;

	i = 0;
	temp = length(n);
	result = ft_calloc(temp + 1, 1);
	if (!result)
		return (NULL);
	result = ft_placement(result, n);
	return (result);
}

static int length(int n)
{
	int i;
	
	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		n *= (-1);
		i++;
	}
	while(n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char *ft_placement(char *s, int n)
{
	int temp;
	int i;

	i = 0;
	if (n == -2147483648)
	{
		s[--i] = '8';
		n /= 10;
	}
	if (n < 0)
	{	
		n *= (-1);
		s[0] = '-';
	}
	if (n >= 10)
	{
		temp = n % 10 + '0';
		ft_placement(&s[i], n / 10);
		i++;
		s[i] = temp;
	}
	if (n < 10)
	{
		temp = n % 10 + '0';
		i++;
		s[i] = temp;
	}
	return (&s[i]);
}
