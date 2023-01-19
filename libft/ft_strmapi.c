/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:12:59 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/30 05:57:52 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*swp;
	unsigned int		count;

	swp = ft_strdup (s);
	count = 0;
	if (!swp)
		return (NULL);
	while (swp[count] != '\0')
	{
		swp[count] = f (count, s[count]);
		count++;
	}
	return (swp);
}
