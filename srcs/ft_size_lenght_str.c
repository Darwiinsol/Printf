/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_lenght_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 16:17:51 by apissier          #+#    #+#             */
/*   Updated: 2017/03/06 16:17:52 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*ft_size_lenght_str(t_flags b, char *str)
{
	char	*tmp;
	int		len;

	len = b.lenght - ft_strlen(str) + 1;
	if (b.lenght <= (int)ft_strlen(str))
		return (str);
	else
	{
		if (!(tmp = (char *)malloc(sizeof(char) * (len))))
			return (NULL);
		else
			tmp = ft_memset(tmp, ' ', b.lenght - ft_strlen(str));
		tmp[b.lenght - ft_strlen(str)] = '\0';
		if (b.minus == 1)
			str = ft_strjoin(str, tmp);
		else
			str = ft_strjoin(tmp, str);
		free(tmp);
	}
	return (str);
}

/*
**	if (b.zero != 0 || b.precision != -1)
**  return (str);
*/
