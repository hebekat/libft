/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 18:36:57 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/30 20:29:44 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int) n)
	{
		if (*(unsigned char *) str == (unsigned char ) c)
			return ((void *) str);
		str++;
		i++;
	}
	return (0);
}
