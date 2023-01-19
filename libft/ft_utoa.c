/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:58:13 by feandrad          #+#    #+#             */
/*   Updated: 2023/01/19 00:59:40 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(unsigned int nb)
{
	size_t	count;

	count = 1;
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_utoa(unsigned int n)
{
	size_t	size;
	char	*str;

	size = intlen(n);
	str = (char *) ft_calloc(size + 1, sizeof(char));
	size -= 1;
	while (size > 0)
	{
		str[size--] = (n % 10) + '0';
		n /= 10;
	}
	str[size] = n + '0';
	return (str);
}
