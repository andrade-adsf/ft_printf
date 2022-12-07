/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:38:56 by feandrad          #+#    #+#             */
/*   Updated: 2022/12/06 22:46:32 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

int ft_printf(char *str, ...)
{
    int     count;
    int     i;
    va_list args;

    if (!str)
        return (-1);
    count = 0;
    i = 0;
    va_start(args, str);
    while(str[i] != '\0')
    {
        if (str[i] == '%')
        {
            i++;
            count += check_flag(str[i], args);
        }
        else
        {
            count++;
            ft_putchar(str[i]);
        }
        i++;
    }
    va_end(args);
    return (count);
}

int	check_flag(char flag, va_list arg)
{
	if (flag == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (flag == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (flag == 'd' || flag == 'i')
		return (ft_itoa(va_arg(arg, int)));
    else
        return (ft_putchar(flag));
}