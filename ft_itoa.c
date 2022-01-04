/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbabblin <sbabblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:51:36 by sbabblin          #+#    #+#             */
/*   Updated: 2021/12/21 17:51:16 by sbabblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_col_vo(int n)
{
	int		a;
	long	b;

	a = 0;
	b = n;
	if (b < 0)
	{
		b *= -1;
		a++;
	}
	while (b >= 10)
	{
		b /= 10;
		a++;
	}
	return (a + 1);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		a;
	long	b;

	b = n;
	a = ft_col_vo(b);
	s = malloc(ft_col_vo(b) + 1);
	if (s == NULL)
		return (NULL);
	if (n < 0)
		s[0] = '-';
	if (b < 0)
		b = -b;
	s[a] = '\0';
	a--;
	while (b >= 10)
	{
		s[a] = b % 10 + 48;
		b /= 10;
		a--;
	}
	s[a] = b % 10 + 48;
	return (s);
}
