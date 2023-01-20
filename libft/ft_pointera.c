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

static size_t	intlen(unsigned long nb);

char	*ft_pointera(unsigned long nbr)
{
	char	*psign;
	char	*hex;
	char	*result;
	int		size;

	if (nbr == 0)
		return (ft_strdup("(nil)"));
	else
	{
		size = 3 + intlen(nbr);
		//psign = (char *)malloc(2);
		result = (char *)ft_calloc(size, 1);
		psign = "0x";
		hex = ft_hextoa(nbr, 'x');
		ft_strlcat(result, psign, size);
		ft_strlcat(result, hex, size);
		free(hex);
		return (result);
	}
}

static size_t	intlen(unsigned long nb)
{
	size_t	count;

	count = 1;
	while (nb > 15)
	{
		nb /= 16;
		count++;
	}
	return (count);
}