/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbabblin <sbabblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:21:36 by sbabblin          #+#    #+#             */
/*   Updated: 2021/12/23 13:02:33 by sbabblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vivod_sixt(unsigned int number, int registr)//выводит число в 16ом формате(%x)
{
	int		a;
	char	*sixt;

	sixt = ft_format((unsigned long long)number, 16);// эта функция преводит 10 число в 16ый формат 
	if (registr == 1)
		sixt = ft_registr(sixt);// здесь в случае необходимости мы менякем регистр
	ft_putstr(sixt);
	a = ft_strlen(sixt); // считает количество символов в строке с цифрами
	free(sixt);
	return(a);// возвращаем количество символов
}
