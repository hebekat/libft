/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/13 16:13:28 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/13 16:22:16 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current;

	current = lst;
	i = 1;
	if (!current)
		return (0);
	while (current->next)
	{
		current = current->next;
		i++;
	}
	return (i);
}
