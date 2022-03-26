/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 13:32:09 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/05 14:12:50 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int argument)
{
	if ((argument >= 0 && argument <= 127))
		return (1);
	return (0);
}
