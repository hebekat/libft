/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tohebeka <tohebeka@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 14:32:32 by tohebeka      #+#    #+#                 */
/*   Updated: 2021/10/30 20:34:07 by tohebeka      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	is_neg_str(char *str)
{
	if (*str == '-')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	number;
	int		length;
	int		is_neg;

	is_neg = 0;
	length = 0;
	number = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	is_neg = is_neg_str((char *) str);
	if (!(*str >= '0' && *str <= '9') && *str != '+' && *str != '-')
		return (0);
	if (!(*str >= '0' && *str <= '9'))
		str++;
	while (str[length] && (str[length] >= '0' && str[length] <= '9'))
	{
		number += str[length] - '0';
		length++;
		number *= 10;
	}
	number /= 10;
	if (is_neg)
		number *= -1;
	return (number);
}
