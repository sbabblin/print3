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

void	ft_putstr(char *s)
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != 0)
	{
		c++;
	}
	return (c);
}

char	*ft_strdup(const char *str)
{
	int      s;
	char	*s2;

	s = ft_strlen(str);
	s2 = malloc(s + 1);
	if (s2 == 0)
		return (0);
	s = 0;
	while (str[s] != '\0')
	{
		s2[s] = str[s];
		s++;
	}
	s2[s] = '\0';
	return (s2);
}

