/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:44:52 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/28 00:47:55 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	str = (char *)b;
	i = 0;
	if (len <= 0)
		return (NULL);
	while (i < len)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
