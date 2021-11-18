/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:48:48 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/20 15:56:44 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(char const *s, char c, size_t *len);
static int	ft_end(const char *s, char c);
static char		*ft_s_substr(char const *s, size_t start, size_t len, size_t *sl);
static char		**abracadabra(char const *s, char c, char **result, size_t *len);

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**result;

	if (!s)
		return (NULL);
	result = ft_calloc((ft_counter(s, c, &len) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	result = abracadabra(s, c, result, &len);
	return (result);
}

static int	ft_counter(char const *s, char c, size_t *len)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (i == 0 && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c && i != 0)
			counter++;
		i++;
	}
	if (s[i - 1] != c)
		counter++;
	*len = i;
	return (counter);
}

static int	ft_end(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_s_substr(char const *s, size_t start, size_t len, size_t *sl)
{
	char	*result;
	size_t	i;

	i = 0;
	if (len > *sl)
		len = *sl;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	if (start > *sl)
	{
		result[0] = '\0';
		return (result);
	}
	while (s[start] && i < len)
	{
		result[i] = s[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}

static char	**abracadabra(char const *s, char c, char **result, size_t *len)
{
	int	i;
	int	j;
	int	match;

	i = 0;
	j = 0;
	match = 1;
	while (s[i])
	{
		if (s[i] != c && match == 1)
		{
			match = 0;
			result[j] = ft_s_substr(s, i, ft_end(&s[i], c), len);
			if (result[j++] == NULL)
				return (NULL);
			i += ft_end(&s[i], c);
		}
		else
		{
			match = 1;
			i++;
		}
	}
	result[j] = NULL;
	return (result);
}
