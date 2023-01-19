/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 04:50:25 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/30 05:50:55 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	size;
	char			*result;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *) ft_calloc (size, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcat(result, s1, size);
	ft_strlcat(result, s2, size);
	return (result);
}
