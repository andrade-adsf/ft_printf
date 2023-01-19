/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:38:23 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/30 03:15:49 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	total_size;

	if (size > ft_strlen(dst))
	{
		total_size = ft_strlen(dst) + ft_strlen(src);
		while (*dst)
		{
			dst++;
			size--;
		}
		count = 0;
		while (count < (size - 1) && src[count])
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	else
	{
		total_size = ft_strlen(src) + size;
	}
	return (total_size);
}
