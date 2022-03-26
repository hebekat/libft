/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 16:37:31 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/13 17:13:58 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (!current)
		return (0);
	while (current->next)
		current = current->next;
	return (current);
}
