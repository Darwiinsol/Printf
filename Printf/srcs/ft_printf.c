/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 10:48:17 by apissier          #+#    #+#             */
/*   Updated: 2017/02/09 12:13:22 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_flags				ft_check_flags(char i, t_flags b)
{
	if (i == '#' || i == '0' || i == '-' || i == '+')
	{
		if (i == '#')
			b.sharp = 1;
		if (i == '0')
			b.zero = 1;
		if (i == '-')
			b.minus = 1;
		if (i == '+')
			b.plus = 1;
		if (i == ' ')
			b.blank = 1;
		return(b);
	}
	return(b);
}

int					ft_flags(char i)
{
	if (i == '#' || i == '0' || i == '-' || i == '+')
		return(1);
	return(0);
}

int					ft_modifier(char i)
{
	if (i == 'h' || i == 'l' || i == 'z' || i == 'j')
		return(1);
	return(0);
}

t_flags				ft_check_modifier(char i, char j, t_flags b)
{
	if (i == 'h' || i == 'l' || i == 'z' || i == 'j')
	{
		if (i == 'h')
		{
			if (j == 'h')
				b.h++;
			b.h++;
		}
		if (i == 'l')
		{
			if (j == 'l')
				b.l++;
			b.l++;
		}
		if (i == 'z')
			b.z = 1;
		if (i == 'j')
			b.j = 1;
		return(b);
	}
	return(b);
}

int				ft_check_letter(va_list ap, char i, t_flags b)
{
	if (i == 'd' || i == 'D' || i == 'i')
		return(ft_printf_di(ap, i, b));
/*	else if (i == '%')
		return(ft_printf_percent(ap, b));
	else if (i == 's')
		return(ft_printf_string(ap, b));
	else if (i == 'c' || i == 'C')
		return(ft_printf_char(ap, i, b));
	else if (i == 'x' || i == 'X')
		return(ft_printf_hexa(ap, i, b));
	else if (i == 'o' || i == 'O')
		return(ft_printf_octal(ap, i, b));
	else if (i == 'u' || i == 'U')
		return(ft_printf_unsigned(ap, i, b));
*/	return(0);		   
}

t_flags			ft_get_precision(const char *c, int *i, t_flags b)
{
	*i = *i + 1;
	if (ft_isdigit(c[*i]))
		b.precision = ft_atoi(&c[*i]);
	return (b);
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	t_flags		b;
	int			i;
	int			len;

	va_start(ap, format);
	if (!format)
		return(-1);
	i = 0;
	len = 0;
	b = (t_flags){0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (ft_flags(format[i]))
			{ 
				b = ft_check_flags(format[i], b);
/////////////////////////////////////////////////
				//printf("b.minus = %d\n", b.minus);
//////////////////////////////////////////////////
				i++;
			}
			if (ft_isdigit(format[i]))
			{
				b.lenght = ft_atoi(&format[i]);
/////////////////////////////////////////////////
				//printf("b.lenght = %d\n", b.lenght);
/////////////////////////////////////////////////
				i++;
			}
			if (format[i] == '.')
			{
				b = ft_get_precision(format, &i, b);
/////////////////////////////////////////////////
				//printf("b.precision = %d\n", b.precision);
////////////////////////////////////////////////
				while (ft_isdigit(format[i]))
					i++;
			}
			if (ft_modifier(format[i]))
			{
				b = ft_check_modifier(format[i], format[i + 1], b);
///////////////////////////////////////////////
				//printf("b.l = %d\n", b.l);
//////////////////////////////////////////////
				i += ((b.h == 2 || b.l == 2) ? 2 : 1);
			}
			len = len + ft_check_letter(ap, format[i], b);
			i++;
/////////////////////////////////////////////////
			//printf("\nlen = %d\n", len);
/////////////////////////////////////////////////
			b = ft_check_modifier(format[i], format[i + 1], b);
		}
		else
		{
			ft_putchar(format[i++]);
			len++;
		} 
	}
	va_end(ap);
	return (0);
}

int     main()
{
	int i = 12;

    ft_printf("|%d|\n", i);
	printf("|%-4.5d\n", i);
    return(0);
}
