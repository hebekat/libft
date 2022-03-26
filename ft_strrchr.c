/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 11:48:51 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/11/01 17:03:11 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	ac;

	ac = (char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == ac)
			return (&((char *)str)[i]);
		i--;
	}
	return (0);
}
