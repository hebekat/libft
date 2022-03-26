/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 14:15:33 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/30 20:06:27 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int argument)
{
	if (argument >= 'a' && argument <= 'z')
		return (argument - 32);
	return (argument);
}
