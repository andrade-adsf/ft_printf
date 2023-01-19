/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:17:34 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/25 23:50:57 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		count;

	str = malloc (ft_strlen(s) + 1 * sizeof(char));
	count = 0;
	while (s[count] != '\0')
	{
		str[count] = s[count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
