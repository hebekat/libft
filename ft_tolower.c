/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 14:15:33 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/30 20:06:30 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int argument)
{
	if (argument >= 'A' && argument <= 'Z')
		return (argument + 32);
	return (argument);
}
