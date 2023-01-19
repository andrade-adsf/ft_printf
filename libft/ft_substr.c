/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 04:37:50 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/26 00:02:32 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	slen;
	unsigned int	size;

	slen = ft_strlen(s);
	if (start >= slen)
		size = 1;
	else if (len >= slen)
		size = (slen - start) + 1;
	else
		size = len + 1;
	sub = malloc (size);
	if (!sub)
		return (NULL);
	i = 0;
	while (((start + i) < slen) && (i < len))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
