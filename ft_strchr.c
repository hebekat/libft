/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 23:26:16 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/11/01 17:03:37 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	ac;

	ac = (char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == ac)
			return ((char *) str + i);
		i++;
	}
	if (ac == 0 && str[i] == 0)
		return ((char *) str + i);
	return (0);
}
