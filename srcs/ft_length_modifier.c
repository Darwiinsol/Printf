/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length_modifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 12:03:39 by apissier          #+#    #+#             */
/*   Updated: 2017/02/09 12:08:27 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

intmax_t		ft_length_modifier_signed(va_list ap, t_flags b)
{
	intmax_t	i;

	i = 0;
	if (b.h == 2)
	  i = (intmax_t)(char)va_arg(ap, int);
	else if (b.h == 1)
	  i = (intmax_t)(short)va_arg(ap, int);
	else if (b.l == 1 || b.letter == 'D')
	  i = (intmax_t)va_arg(ap, long);
	else if (b.l == 2)
	  i = (intmax_t)va_arg(ap, long long);
	else if (b.j == 1)
	  i = va_arg(ap, intmax_t);
	else if (b.z == 1)
	  i = (intmax_t)va_arg(ap, ssize_t);
	else
	  i = (intmax_t)va_arg(ap, int);
	return(i);
}