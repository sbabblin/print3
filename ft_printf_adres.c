/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_adres.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbabblin <sbabblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 12:28:33 by sbabblin           #+#    #+#            */
/*   Updated: 2021/12/25 20:15:54 by sbabblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_format(unsigned long long number, int si)// функция переводящая в нужную сиситему исч
{
	unsigned long long	a; 
	int					count;
	char				*str;//сюда мы запишем число в 16ой системе

	a = number;
	str = 0;
	count = 0;
	if (number == 0)
		return (ft_strdup("0"));///обрабатывается условия если подан адрес '0'
	while (number != 0)
	{
		number /= si;
		count++;/// здесь мы узнали сколько раз мы поделили на 16
	}
	str = malloc(count + 1);
	if (!str)
		return (0);
	str[count] = '\0';
	str = ft_format_print(a, si, count, str);
	return (str);// возвращаем значение - строка с числом в 16ой
}

char	*ft_format_print(unsigned long long number, int si, int count, char *str)//функция которая записывает в строку
{
	while (number != 0)
	{
		if ((number % si) < 10)
			str[count - 1] = (number % si) + 48;/// записыыаем число с конца 
		else
			str[count - 1] = (number % si) + 55;
		number /= si;
		count--;
	}
	return (str);//возвращает нам полученную строку
}

char	*ft_registr(char *str)/////замена регистра с верхнего на нижний 
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	ft_vivod_adres(unsigned long long num)// ОСНОВНАЯ ФУНКЦИЯ для вывода адреса в 16ом формате
{
		char	*p;
		int		a;
	if (num == 0)
	{
		write (1, "(nil)", 5);
		return (0);
	}
	p = ft_format(num, 16);// записали сюда число в 16ом флормате
	p = ft_registr(p);// найти функцию котрая меняет регистр с верхнего на нижний 
	write (1, "0x",2);
	ft_putstr(p);
	a = ft_strlen(p);
	free(p);
	return(a);
}