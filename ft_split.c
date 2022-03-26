/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 17:13:40 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/30 20:39:13 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_next_word_length(const char *str, int c, int mode)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c && mode == 1)
			return (i);
		if (str[i] == c && str[i + 1] != c && mode == 2)
			return (i);
		i++;
		if (!str[i])
			return (i);
	}
	return (0);
}

int	find_size(char const *s, char c)
{
	int	i;
	int	ret;

	ret = 0;
	i = 1;
	if (!*s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			ret++;
			while (s[i] != c && s[i])
				i++;
			if (!s[i])
				return (ret);
		}
		i++;
	}
	return (ret);
}

char	**free_array(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		wordAmount;
	char	**ret;

	if (!s)
		return (NULL);
	wordAmount = find_size(s, c);
	i = 0;
	ret = malloc((wordAmount + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	while (*s == c)
		s++;
	while (i < wordAmount)
	{
		ret[i] = malloc(find_next_word_length(s, c, 1) + 1);
		if (!ret[i])
			return (free_array(ret));
		ft_strlcpy(ret[i], s, find_next_word_length(s, c, 1) + 1);
		s += find_next_word_length(s, c, 2) + 1;
		i++;
	}
	ret[i] = 0;
	return (ret);
}
