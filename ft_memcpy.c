/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 17:51:03 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/30 18:30:32 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < (int) n)
	{
		((char *) dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
