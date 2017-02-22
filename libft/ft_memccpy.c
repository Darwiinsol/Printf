/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:53:32 by apissier          #+#    #+#             */
/*   Updated: 2016/11/30 17:44:57 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *restrict dst, const void *restrict src,
					int c, size_t n)
{
	size_t			i;
	char			*dest;
	char			*srce;

	i = 0;
	dest = (char*)dst;
	srce = (char*)src;
	while (i < n)
	{
		dest[i] = srce[i];
		if (srce[i] == c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
