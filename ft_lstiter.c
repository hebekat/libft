/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 23:34:26 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/14 00:03:09 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	if (!lst)
		return ;
	while (current->next)
	{
		f(current->content);
		current = current->next;
	}
	f(current->content);
}
