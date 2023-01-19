/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 02:17:45 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/30 03:14:20 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_limit(int res, int next, int sign);

int	ft_atoi(const char *str)
{
	int	count;
	int	sign;
	int	result;

	count = 0;
	result = 0;
	sign = 1;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == 32)
		count++;
	if (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign = -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		if (!check_limit(result, str[count] - '0', sign))
			return (0);
		result = (result * 10) + str[count] - '0';
		count++;
	}
	return (result * sign);
}

static int	check_limit(int res, int next, int sign)
{
	if (sign < 0)
	{
		if (-res < ((1 << 31) + next) / 10)
			return (0);
	}
	else
	{
		if (res > (~(1 << 31) - next) / 10)
			return (0);
	}
	return (1);
}
