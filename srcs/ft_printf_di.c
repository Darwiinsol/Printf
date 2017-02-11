/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 17:07:14 by apissier          #+#    #+#             */
/*   Updated: 2017/02/09 13:02:45 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int				ft_printf_di(va_list ap, char i, t_flags b)
{
	int			c;
	char		*str;
	int			len;

	if (i == 'd')
	{
		b.letter = 'i';
////////////////////////////////////////
		//printf("b.letter = %c\n", b.letter);
/////////////////////////////////////////
	}
	else
		b.letter = i;
	c = ft_length_modifier_signed(ap, b);
	if (i == 0 && b.precision == 0)
		str = ft_strdup("");
////////////////////////////////////////
	//printf("c = %d", c);
//////////////////////////////////////
	else
	  str = ft_itoa_intmax_t(c);
	if (str == NULL)
		return (0);
	str = ft_check_if_flags_int(b, str);
	ft_putstr(str);
	len = ft_strlen(str);
	free(str);
	str = NULL;
	return(len);
}