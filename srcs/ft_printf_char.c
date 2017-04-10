/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 15:52:28 by apissier          #+#    #+#             */
/*   Updated: 2017/03/24 17:11:42 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
**   char		ft_printf_c_unicode(va_list ap, t_flags b)
**   {
**   wchar_t	c;
**   char		*str;
**
**   c = va_arg(ap, wchar_t);
**   str = ft_unicode(c);
**   return (str);
**   }
*/

/*
**		else if (*i == 'C')
**       {
**       b.letter = 'C'
**       str = ft_printf_char_maj(ap, b);
**       }
*/

int			ft_printf_char(va_list ap, t_flags b, char i)
{
	int		len;
	char	c;
	char	*str;

//	if (b.l == 1)
//		len = ft_printf_c_unicde(ap, b);
//	else
//	{
		b.letter = 'c';
		str = NULL;
		i = '\0';
		c = (char)va_arg(ap, int);
		if (c == 0 && b.lenght >= 2)
			b.lenght = 1;
		str = ft_strchar(c, 1);
		str = ft_check_if_flags_str(b, str);
		len = ft_free_return(&str);
		if (c == 0)
			len += 1;
//	}
	return (len);
}
