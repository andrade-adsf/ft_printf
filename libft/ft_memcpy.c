/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:44:48 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/26 23:22:32 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;
	size_t	count;

	if (!dst && !src)
		return (NULL);
	dest = (char *)dst;
	source = (char *)src;
	count = 0;
	while (count < n)
	{
		dest[count] = source[count];
		count++;
	}
	return (dst);
}
