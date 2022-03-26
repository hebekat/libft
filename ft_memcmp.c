/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 18:45:22 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/13 15:42:45 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int	i;

	i = 0;
	while (i < (int) n)
	{
		if (*(unsigned char *) str1 != *(unsigned char *) str2)
			return (*(unsigned char *) str1 - *(unsigned char *) str2);
		str1++;
		str2++;
		i++;
	}
	return (0);
}
