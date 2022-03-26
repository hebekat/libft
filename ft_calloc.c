/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 16:35:40 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/12 15:10:56 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*space;

	space = malloc(nelem * elsize);
	if (!space)
		return (NULL);
	ft_bzero(space, nelem * elsize);
	return (space);
}
