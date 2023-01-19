/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:30:01 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/26 21:13:54 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	if (!dst && !src)
		return (NULL);
	if (src < dst && (src + len) > dst)
	{
		source = (char *) src;
		dest = (char *) dst;
		while (len > 0)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
