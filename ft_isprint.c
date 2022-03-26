/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 13:33:45 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/05 14:11:42 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int argument)
{
	if (argument >= 32 && argument <= 126)
		return (1);
	return (0);
}
