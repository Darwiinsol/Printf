/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_prec_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 16:18:57 by apissier          #+#    #+#             */
/*   Updated: 2017/03/06 16:19:31 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char			*ft_size_prec_int(t_flags b, char *str)
{
	char		*tmp;
	char		*tmp2;

	if (b.precision <= (int)ft_strlen(str))
		return (str);
	if (!(tmp = (char *)malloc(sizeof(char) * (b.precision - \
	ft_strlen(str) + 1))))
		return (NULL);
	tmp = ft_memset(tmp, '0', b.precision - ft_strlen(str));
	tmp[b.precision - ft_strlen(str)] = '\0';
	tmp2 = str;
	str = ft_strjoin(tmp, tmp2);
	free(tmp2);
	free(tmp);
	return (str);
}
