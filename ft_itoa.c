/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/08 13:05:13 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/30 20:41:32 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_neg(int n)
{
	int	ret;

	ret = 0;
	if (n < 0)
		return (1);
	return (0);
}

char	*edge_cases(int n)
{
	char	*ret;

	if (n == -2147483648)
	{
		ret = malloc(15);
		ft_strlcpy(ret, "-2147483648", 12);
		return (ret);
	}
	if (n == 0)
	{
		ret = malloc(2);
		ret[0] = '0';
		ret[1] = 0;
		return (ret);
	}
	return ("X");
}

int	digits_count(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
	{
		digits++;
		n *= -1;
	}
	while (n >= 1)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	int		values[2];
	char	*ret;
	char	*edge_case;

	edge_case = edge_cases(n);
	if (edge_case[0] != 'X')
		return (edge_case);
	values[0] = digits_count(n);
	ret = malloc(values[0] + 1);
	if (!ret)
		return (0);
	values[1] = check_neg(n);
	if (n < 0)
		n *= -1;
	ret[values[0]] = 0;
	values[0]--;
	while (values[0] >= 0)
	{
		ret[values[0]] = (n % 10) + '0';
		values[0]--;
		n /= 10;
	}
	if (values[1])
		ret[0] = '-';
	return (ret);
}
