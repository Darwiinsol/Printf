/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_blank.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 15:35:23 by apissier          #+#    #+#             */
/*   Updated: 2017/04/24 18:14:14 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*ft_is_blank(t_flags b, char *str, size_t negative)
{
	char		*tmp;

	if (negative == 1)
		return (str);
	if (b.blank == 1 && (b.letter == 'i' || b.letter == 'D'))
	{
		tmp = str;
		str = ft_strjoin(" ", tmp);
		free(tmp);
	}
	return (str);
}
