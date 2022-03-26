/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 17:02:10 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/13 20:42:41 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*buf;

	if (lst)
	{
		current = *lst;
		while (current->next)
		{
			buf = current->next;
			ft_lstdelone(current, del);
			current = buf;
		}
		ft_lstdelone(current, del);
		*lst = NULL;
	}
}
