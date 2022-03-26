/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 18:35:52 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/30 20:38:19 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	i;

	i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

long	ft_pow(int n, int pow)
{
	if (pow != 0)
		return (n * ft_pow(n, pow - 1));
	else
		return (1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	i;
	char	s;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	i = count_digits(n);
	while (i >= 0)
	{
		s = (n / ft_pow(10, i)) + '0';
		write(fd, &s, 1);
		n -= ft_pow(10, i) * (s - '0');
		i--;
	}
}
