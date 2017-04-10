/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_plus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 15:40:26 by apissier          #+#    #+#             */
/*   Updated: 2017/03/06 15:40:38 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*ft_is_plus(t_flags b, char *str)
{
	char		*tmp;

	if (b.plus == 1 && (b.letter == 'i' || b.letter == 'D'))
	{
		tmp = str;
		str = ft_strjoin("+", tmp);
		free(tmp);
	}
	return (str);
}
