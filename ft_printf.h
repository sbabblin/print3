/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbabblin <sbabblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 12:28:33 by sbabblin          #+#    #+#             */
/*   Updated: 2021/12/25 20:15:54 by sbabblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

# define UI unsigned int
# define CC const char
void    ft_putstr(char *s);
int     ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_itoa(int n);

int	    ft_printf(const char *s1, ...);
int	    ft_obrabotka(char s, va_list arg_ptr);
int	    ft_vivod_simvola(char s2);
int	    ft_vivod_str(char *str);
int	    ft_vivod_int(int i);
int	    ft_vivod_adres(unsigned long long num);
int	    ft_vivod_sixt(unsigned int number, int registr);
char	*ft_format(unsigned long long number, int si);
char	*ft_format_print(unsigned long long number, int si, int count, char *str);
char	*ft_registr(char *str);
int 	ft_vivod_unsigned(unsigned int number);
char	*ft_vivod_un(unsigned int n);
#endif