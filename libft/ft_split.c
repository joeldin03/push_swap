/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:14:24 by joelozan          #+#    #+#             */
/*   Updated: 2024/04/16 19:15:55 by joelozan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/push_swap.h"

static int	count_words(const char *s, char c)
{
	size_t	ctr;
	size_t	i;
	int		word;

	i = 0;
	word = 0;
	ctr = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			ctr++;
		else if (s[i] == c && ctr > 0)
		{
			ctr = 0;
			word++;
		}
		i++;
	}
	if (ctr > 0)
		word++;
	return (word);
}

static char	**subarr(char **array, char const *s, char c)
{
	size_t	i;
	size_t	ctr;
	size_t	x;

	i = 0;
	ctr = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			ctr++;
		if ((s[i] == c && ctr > 0) || (s[i] != c && s[i + 1] == '\0'))
		{
			array[x] = malloc(sizeof(char) * (ctr + 1));
			if (!array[x])
				return (0);
			ctr = 0;
			x++;
		}
		i++;
	}
	return (array);
}

static char	**substrcpy(char **array, char const *s, char c)
{
	size_t	i;
	size_t	x;
	size_t	y;

	i = 0;
	x = 0;
	y = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			array[x][y++] = s[i];
		if (s[i] != c && s[i + 1] == '\0')
			array[x][y] = '\0';
		else if (s[i] == c && i > 0 && s[i - 1] != c)
		{
			array[x][y] = '\0';
			x++;
			y = 0;
		}
		i++;
	}
	return (array);
}

static char	**freesubstr(char **array)
{
	size_t	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	int		wordcount;

	if (!s)
	{
		array = malloc(sizeof(char *));
		if (!array)
			return (0);
		*array = NULL;
		return (array);
	}
	wordcount = count_words(s, c);
	array = malloc(sizeof(char *) * (wordcount + 1));
	if (!array)
		return (0);
	if (subarr(array, s, c))
	{
		substrcpy(array, s, c);
		array[wordcount] = NULL;
	}
	else
		array = freesubstr(array);
	return (array);
}
