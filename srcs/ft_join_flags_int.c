/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_flags_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 15:43:29 by apissier          #+#    #+#             */
/*   Updated: 2017/03/24 18:36:17 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*ft_join_flags_int(t_flags b, char *str)
{
	if (b.sharp == 1 && b.letter == 'x')
		str = ft_strjoinffree("0x", str);
	if (b.sharp == 1 && b.letter == 'X')
		str = ft_strjoinffree("0X", str);
	if (b.lenght != 0)
		str = ft_size_lenght_int(b, str);
	return (str);
}
