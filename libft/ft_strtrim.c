/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 06:03:27 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/26 00:00:38 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static int	check_delim(char c, char *delim);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	start = 0;
	while (s1[start] && check_delim(s1[start], (char *)set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && check_delim(s1[end], (char *)set))
		end--;
	trim = ft_substr(s1, start, ((end - start) + 1));
	if (!trim)
		return (NULL);
	return (trim);
}

static int	check_delim(char c, char *delim)
{
	while (*delim)
	{
		if (*delim == c)
			return (1);
		delim++;
	}
	return (0);
}
