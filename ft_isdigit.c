/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 13:29:56 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/04 13:51:47 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int argument)
{
	if (argument >= '0' && argument <= '9')
		return (1);
	return (0);
}
