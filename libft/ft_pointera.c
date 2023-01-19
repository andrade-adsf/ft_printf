/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointera.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 00:00:42 by feandrad          #+#    #+#             */
/*   Updated: 2023/01/19 01:05:46 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(unsigned int nb);

char	*ft_pointera(unsigned long int nbr)
{
	char	*psign;
	char	*hex;
	char	*result;
	int		size;

	if (nbr == 0)
		return ("(nil)");
	else
	{
		psign = (char *)malloc(2);
		size = 3 + intlen(nbr);
		result = (char *)malloc(size);
		psign = "0x";
		hex = ft_hextoa(nbr, 'x');
		ft_strlcat(result, psign, size);
		ft_strlcat(result, hex, size);
		return (result);
	}
}

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