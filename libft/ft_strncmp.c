/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:44:58 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/29 02:07:56 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[count] == s2[count] && count < n)
		count++;
	if (count == n)
		return (0);
	else
		return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}
