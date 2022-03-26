/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 16:23:00 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/30 20:39:44 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	add_string(char const *s, char **ret, int i)
{
	int	j;

	j = 0;
	while (*s)
	{
		ret[0][i] = *s;
		s++;
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		i;
	int		j;
	int		s1Length;
	int		s2Length;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s1Length = (int) ft_strlen(s1);
	s2Length = (int) ft_strlen(s2);
	ret = malloc(s1Length + s2Length + 1);
	if (!ret)
		return (NULL);
	i = add_string(s1, &ret, 0);
	i = add_string(s2, &ret, i);
	ret[i] = 0;
	return (ret);
}
