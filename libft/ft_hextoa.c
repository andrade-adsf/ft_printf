/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:13:56 by feandrad          #+#    #+#             */
/*   Updated: 2023/01/19 01:00:46 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(unsigned long nb);

char	*ft_hextoa(unsigned long nbr, int flag)
{
	char	*result;
	int	digits;
	char	*base_str;

	//base_str = (char *)malloc(16 + 1);
	if (flag == 'x')
		base_str = BASELOW;
	else if (flag == 'X')
		base_str = BASEUP;
	digits = intlen(nbr);
	result = (char *)ft_calloc(digits + 1, 1);
	if (!result)
		return (0);
	result[digits--] = '\0';
	if (digits == 0 && result[0] == '\0')
		result[0] = '0';
	while (nbr > 0)
	{
		result[digits--] = base_str[nbr % 16];
		nbr /= 16;
	}
	
	//free(base_str);
	return (result);
}

static int	intlen(unsigned long nb)
{
	int	count;

	count = 1;
	while (nb > 15)
	{
		nb /= 16;
		count++;
	}
	return (count);
}
