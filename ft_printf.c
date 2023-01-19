/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:38:56 by feandrad          #+#    #+#             */
/*   Updated: 2023/01/19 09:02:13 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	int		i;
	va_list	args;

	if (!str)
		return (-1);
	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += check_flag(str[i], args);
		}
		else
		{
			count++;
			ft_putchar_fd(str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	check_flag(char flag, va_list arg)
{
	if (flag == 'c')
		return (ft_putchar_fd(va_arg(arg, int), 1));
	else if (flag == 's')
		return (ft_putstr_fd(va_arg(arg, char *), 1));
	else if (flag == 'd' || flag == 'i')
		return (ft_putstr_fd(ft_itoa(va_arg(arg, int)), 1));
	else if (flag == 'u')
		return (ft_putstr_fd(ft_utoa(va_arg(arg, int)), 1));
	else if (flag == 'x' || flag == 'X')
		return (ft_putstr_fd(ft_hextoa(va_arg(arg, int), flag), 1));
	else if (flag == 'p')
		return (ft_putstr_fd(ft_pointera(va_arg(arg, int)), 1));
	else
		return (ft_putchar_fd(flag, 1));
}
