/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 10:49:19 by apissier          #+#    #+#             */
/*   Updated: 2017/02/06 16:55:33 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft/libft.h"
////////////////
#include <stdio.h>
/////////////////

typedef struct			s_flags
{
	int			width;
	int			precision;
	int			lenght;
	int			sharp;
	int			zero;
	int			blank;
	int			minus;
	int			plus;
	int			letter;
	int			h;
	int			l;
	int			j;
	int			z;
}						t_flags;

int             ft_printf(const char *format, ...);
int				ft_check_letter(va_list ap, char i, t_flags b);
t_flags			ft_check_modifier(char i, char j, t_flags b);
t_flags			ft_check_flags(char i, t_flags b);
intmax_t		ft_length_modifier_signed(va_list ap, t_flags b);
int				ft_printf_di(va_list ap, char i, t_flags b);
int				ft_modifier(char i);
int				ft_flags(char i);
char			*ft_itoa_intmax_t(intmax_t n);

#endif
