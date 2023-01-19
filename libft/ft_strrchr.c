/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 02:08:55 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/26 23:13:16 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	if (c > 255)
		return ((char *) s);
	count = 0;
	while (s[count] != '\0')
		count++;
	while (s[count] != c && count > 0)
		count--;
	if (s[count] == c)
		return ((char *)&s[count]);
	else
		return (NULL);
}
