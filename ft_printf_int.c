/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbabblin <sbabblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:21:36 by sbabblin          #+#    #+#             */
/*   Updated: 2021/12/21 13:02:33 by sbabblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vivod_int(int i)
{
	int 	a;
	char	*s;

	s = ft_itoa(i);
	ft_putstr(s);
	a = ft_strlen(s);
	free(s);
	return(a);
}
