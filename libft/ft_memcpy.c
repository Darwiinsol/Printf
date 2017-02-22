/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:40:49 by apissier          #+#    #+#             */
/*   Updated: 2016/11/25 17:50:32 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*srce;

	i = 0;
	dest = (char*)dst;
	srce = (char*)src;
	while (i < n && srce[i])
	{
		dest[i] = srce[i];
		i++;
	}
	return (dest);
}
