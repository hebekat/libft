/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 16:10:34 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/30 18:31:28 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int) n)
	{
		*(char *) str = c;
		str++;
		i++;
	}
	return (str - i);
}
