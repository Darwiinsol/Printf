#include "../includes/ft_printf.h"

int		ft_printf_string(va_list ap, t_flags b)
{
  int		len;
  char		*str;

  b.letter = 's';
  str = va_arg(ap, char *);
  if (str == NULL)
    {
      str = ft_strdup("(null)");
      str = ft_check_if_flags_str(b, str);
      len = ft_free_return(&str);
    }
  else
    {
      str = ft_check_if_flags_str(b, str);
      ft_putstr(str);
      len = ft_strlen(str);
      str = NULL;
    }
  return (len);
}
