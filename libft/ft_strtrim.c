/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:49:33 by apissier          #+#    #+#             */
/*   Updated: 2016/11/30 17:32:27 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*new;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[j])
		j++;
	if (i == j)
		return (ft_strnew(0));
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
		j--;
	new = (char*)malloc(sizeof(char) * (j - i + 1));
	if (new == NULL)
		return (NULL);
	while (i < j)
		new[k++] = s[i++];
	new[k] = '\0';
	return (new);
}
