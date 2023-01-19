/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 23:48:25 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/30 06:34:02 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int n);
static void		fill_tab(char *tab, int nb, int size);

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	size = intlen(n);
	str = (char *) ft_calloc(size + 1, sizeof(char));
	fill_tab(str, n, size);
	return (str);
}

static void	fill_tab(char *tab, int nb, int size)
{
	int	sign;

	sign = 1;
	tab[size--] = '\0';
	if (nb == (1 << 31))
	{
		tab[size--] = 8 + '0';
		nb = (nb / 10);
	}
	if (nb < 0)
	{
		sign = -1;
		nb *= sign;
	}
	while (size > 0)
	{
		tab[size--] = (nb % 10) + '0';
		nb /= 10;
	}
	if (sign < 0)
		tab[0] = '-';
	else
		tab[0] = (nb % 10) + '0';
}

static size_t	intlen(int nb)
{
	size_t	count;

	count = 1;
	if (nb == (1 << 31))
	{
		nb = (nb + 1) * -1;
		count++;
	}
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	return (count);
}
