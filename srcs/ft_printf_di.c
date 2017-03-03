/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 17:07:14 by apissier          #+#    #+#             */
/*   Updated: 2017/02/09 13:02:45 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char            *ft_itoa_intmax_t(intmax_t n)
{
  char          *str;

  if (!(str = (char *)malloc(sizeof(char) * 2)))
    return (NULL);
  if (n < -9223372036854775807)
    return (ft_strdup("-9223372036854775808"));
  if (n < 0)
    {
      str[0] = '-';
      str[1] = '\0';
      str = ft_strjoin(str, ft_itoa_intmax_t(-n));
    }
  else if (n >= 10)
    str = ft_strjoin(ft_itoa_intmax_t(n / 10), ft_itoa_intmax_t(n % 10));
  else if (n < 10 && n >= 0)
    {
      str[0] = n + '0';
      str[1] = '\0';
    }
  return (str);
}

int				ft_printf_di(va_list ap, char i, t_flags b)
{
  /*intmax_t c pour gérer D qui est signed*/
	intmax_t			c;
	char		*str;
	int			len;

	if (i == 'd')
	{
		b.letter = 'i';
////////////////////////////////////////
		//printf("b.letter = %c\n", b.letter);
/////////////////////////////////////////
	}
	else
		b.letter = i;
	/////////////////////////////
	//printf("i = %c", i);
	/////////////////////////////
	c = ft_length_modifier_signed(ap, b);
	if (c == 0 && b.precision == 0)
		str = ft_strdup("");
	else
	  str = ft_itoa_intmax_t(c);
	if (str == NULL)
		return (0);
	///////////////////////////
        //printf("str = %s\n", str);
        //////////////////////////
	str = ft_check_if_flags_int(b, str);
	///////////////////////////
	//printf("str = %s\n", str);
	//////////////////////////
	ft_putstr(str);
	len = ft_strlen(str);
	free(str);
	//str = NULL;
	return(len);
}
