/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:34:35 by apissier          #+#    #+#             */
/*   Updated: 2017/04/10 18:41:17 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_flags				ft_check_flags(char i, t_flags b)
{
	if (i == '#' || i == '0' || i == '-' || i == '+' || i == ' ')
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
		return (b);
	}
	return (b);
}

int					ft_flags(char i)
{
	if (i == '#' || i == '0' || i == '-' || i == '+' || i == ' ')
		return (1);
	return (0);
}

int					ft_modifier(char i)
{
	if (i == 'h' || i == 'l' || i == 'z' || i == 'j')
		return (1);
	return (0);
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
		return (b);
	}
	return (b);
}

int					ft_check_letter(va_list ap, char i, t_flags b)
{
	if (i == 'd' || i == 'D' || i == 'i')
		return (ft_printf_di(ap, i, b));
	else if (i == '%')
		return (ft_printf_percent(b));
	else if (i == 's')
		return (ft_printf_string(ap, b));
	else if (i == 'c' || i == 'C')
		return (ft_printf_char(ap, b, i));
	else if (i == 'x' || i == 'X')
		return (ft_printf_hexa(ap, b, i));
	else if (i == 'o' || i == 'O')
		return (ft_printf_octal(ap, b, i));
	else if (i == 'u' || i == 'U')
		return (ft_printf_unsigned(ap, b, i));
	else if (i == 'p')
		return (ft_printf_pointer(ap, b));
	return (0);
}
