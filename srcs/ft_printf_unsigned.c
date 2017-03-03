#include "../includes/ft_printf.h"

static char            *ft_itoa_uintmax_t(uintmax_t n)
{
  char          *str;

  if (!(str = (char *)malloc(sizeof(char) * 2)))
    return (NULL);
  else if (n >= 10)
    str = ft_strjoin(ft_itoa_uintmax_t(n / 10), ft_itoa_uintmax_t(n % 10));
  else if (n < 10)
    {
      str[0] = n + '0';
      str[1] = '\0';
    }
  return (str);
}

int		ft_printf_unsigned(va_list ap, t_flags b, char i)
{
  uintmax_t	u;
  char		*str;
  int		len;

  b.letter = i;
  u = ft_lenght_modifier_unsigned(ap, b);
  /*  if (u == 0 && b.precision == 0)
      str = ft_strdup("");*/
  str = ft_itoa_uintmax_t(u);
  str = ft_check_if_flags_int(b, str);
  len = ft_free_return(&str);
  return (len);
}
