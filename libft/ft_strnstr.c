/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 16:35:40 by apissier          #+#    #+#             */
/*   Updated: 2016/11/25 17:36:25 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *mdf, const char *a, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;
	size_t	j;

	i = 0;
	src = (char*)a;
	dest = (char*)mdf;
	if (src[0] == '\0')
		return (dest);
	while (dest[i])
	{
		j = 0;
		while (dest[j] && dest[i + j] == src[j] && j + i < n)
			j++;
		if (src[j] == '\0')
			return (&dest[i]);
		i++;
	}
	return (NULL);
}
