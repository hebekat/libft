/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 18:49:25 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/11/01 17:02:12 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[i])
		i++;
	while (j <= i)
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1Length;
	int		s1LCpy;
	char	*ret;
	int		i;

	i = 0;
	s1Length = 0;
	if (!set || !s1)
		return (NULL);
	while (s1[s1Length])
		s1Length++;
	s1LCpy = s1Length;
	while (*s1 && is_in_set(*s1, set))
	{
		s1++;
		i++;
	}
	if (!*s1)
		return (ft_strdup(""));
	s1Length -= i;
	while (is_in_set(s1[s1Length], set))
		s1Length--;
	s1Length++;
	ret = ft_substr(s1, 0, s1Length);
	return (ret);
}
