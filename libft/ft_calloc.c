/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:26:10 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/28 01:48:11 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (size > (~(1 << 31) / count))
		return (NULL);
	mem = malloc (size * count);
	if (mem != NULL)
		ft_bzero(mem, (count * size));
	return (mem);
}
