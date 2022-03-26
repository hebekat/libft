/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 18:35:34 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/30 20:28:08 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i])
	{
		while (little[j] == big[i + j] && i + j < len)
		{
			j++;
			if (!little[j])
				return (&((char *)big)[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
