/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 15:22:48 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/11/01 17:13:50 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		j;

	j = 0;
	if (!s)
		return (NULL);
	ret = malloc((int) len + 1);
	while (s[j])
		j++;
	if (j < (int) start)
	{
		ret[0] = 0;
		return (ret);
	}
	j = 0;
	if (!ret)
		return (NULL);
	while (j < (int) len)
	{
		ret[j] = s[start + j];
		j++;
	}	
	ret[j] = 0;
	return (ret);
}
