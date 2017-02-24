#include "../includes/ft_printf.h"

static char	*ft_pointer_to_hex(unsigned long u)
{
  char			*str;
  unsigned long		tmp;
  int			cnt;

  tmp = u;
  cnt = 2;
  while ((tmp = tmp / 16) != 0)
    cnt++;
  if ((str = (char *)malloc(sizeof(char) * cnt)) == NULL)
    return (0);
  str[--cnt] = '\0';
  while (cnt-- > 0)
    {
      if (u % 16 < 10)
	str[cnt] = (u % 16 + 48);
      if (u % 16 >= 10)
	str[cnt] = (u % 16 + 87);
      u = u / 16;
    }
  return (str);
}

int		ft_printf_pointer(va_list ap, t_flags b)
{
  unsigned long		u;
  int			len;
  char			*str;

  len = 0;
  u = (unsigned long)va_arg(ap, void *);
  str = ft_pointer_to_hex(u);
  if (str == NULL)
    return (0);
  str = ft_check_if_flags_int(b, str);
  len = (ft_strlen(str) + 2);
  ft_putstr("0x");
  ft_putstr(str);
  free(str);
  return (len);
}
