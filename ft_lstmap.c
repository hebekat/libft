/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 23:41:35 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/11/02 17:03:33 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*ret;
	t_list	*new_element;

	if (!lst)
		return (NULL);
	current = lst;
	ret = ft_lstnew(f(current->content));
	while (current->next)
	{
		new_element = ft_lstnew(f(current->content));
		if (!new_element)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, new_element);
		current = current->next;
	}
	return (ret);
}
