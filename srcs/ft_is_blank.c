/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_blank.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 15:35:23 by apissier          #+#    #+#             */
/*   Updated: 2017/03/06 15:35:41 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*ft_is_blank(char *str)
{
	char		*tmp;

	tmp = str;
	str = ft_strjoin(" ", tmp);
	free(tmp);
	return (str);
}
