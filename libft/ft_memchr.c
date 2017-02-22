/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:13:15 by apissier          #+#    #+#             */
/*   Updated: 2016/11/30 13:20:21 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = (char*)s;
	while (i < n)
	{
		if (s2[i] == c)
			return (&s2[i]);
		i++;
	}
	return (NULL);
}
