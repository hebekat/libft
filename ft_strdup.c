/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 18:25:50 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/12 15:08:49 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ret;

	i = 0;
	while (s[i])
		i++;
	ret = malloc(i + 1);
	if (!ret)
		return (NULL);
	while (i >= 0)
	{
		ret[i] = s[i];
		i--;
	}	
	return (ret);
}
