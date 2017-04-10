/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_return.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 15:34:14 by apissier          #+#    #+#             */
/*   Updated: 2017/03/06 15:34:18 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_free_return(char **str)
{
	int		len;

	len = 0;
	if (str == NULL)
		return (0);
	ft_putstr(*str);
	len = ft_strlen(*str);
	free(*str);
	return (len);
}
