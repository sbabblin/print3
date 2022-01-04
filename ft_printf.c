/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbabblin <sbabblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:55:53 by sbabblin          #+#    #+#             */
/*   Updated: 2021/12/10 13:17:55 by sbabblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_obrabotka(char s, va_list arg_ptr)/////////// обработка символовов и их вывод
{
	int	count;

	count = 0;
	if (s == 'c' || s == 'C')
		count = ft_vivod_simvola(va_arg(arg_ptr, int));////////////выводим символ
	else if (s == '%')
			count = ft_vivod_simvola('%');///////////выводим знак процента
	else if (s == 's'|| s == 'S')
		count = ft_vivod_str(va_arg(arg_ptr, char *));////////здесь будем выводить строку 
	else if (s == 'i' || s == 'd' || s == 'D')
		count = ft_vivod_int(va_arg(arg_ptr, int));////////здесь будем выводить десятичное число 
	else if (s == 'p' || s == 'P')
		count = ft_vivod_adres(va_arg(arg_ptr, unsigned long long));//выводит адрес в 16ом формате
	else if (s == 'x')
		count = ft_vivod_sixt(va_arg(arg_ptr, unsigned int), 1); //меняет формат числа с 10 на 16 ый, попутно меняя решгистр и выводит
	else if (s == 'X')
		count = ft_vivod_sixt(va_arg(arg_ptr,unsigned int), 0);//меняет формат числа с 10 на 16ый и водит это число 
	else if ((s == 'u' || s == 'U'))
		count = ft_vivod_unsigned((UI)va_arg(arg_ptr, UI));
	return (count);
}

int	ft_printf(const char *s1, ...)///////////////////////////основная функция
{
	int		i;
	int		a;
	va_list	arg_ptr;

	i = 0;
	a = 0;
	va_start (arg_ptr, s1);
	while (s1[i] != '\0')
	{
		if (s1[i] == '%' && s1[i + 1])
		{
			a += ft_obrabotka(s1[i + 1], arg_ptr);
			i++;
			i++;
		}
		else if (s1[i] != '%')
		{
			a += write (1, &s1[i], 1);
			i++;
		}
	}
	va_end(arg_ptr);
	return (a);
}

int	main(void)
{	
	char	c;
	char *s;

	s = "privet";
	c = 'e';
	char str[] = "sutener";
	char s3[] = "putana";
	char *s1 = NULL;
	char *s2;
	s2 = "bitch";
	int *i = NULL;
	int j = 500;
	int d = 5;
	int k = -500;
	int l = 5;
	int m = 100000000;
	int n = -5;
	ft_printf("%d %d %d\n", 1, 2, 3);
	printf("%d %d %d\n", 1, 2, 3);
	return (0);
}
