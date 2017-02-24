#include "../includes/ft_printf.h"

char		*ft_join_flags_int(t_flags b, char *str)
{
  char		*tmp;

  if (b.sharp == 1 && b.letter == 'x')
      str = ft_strjoin("0x", str);
  if (b.sharp == 1 && b.letter == 'X')
    str = ft_strjoin("0X", str);
  if (b.lenght != 0)
    str = ft_size_lenght_int(b, str);
  return (str);
}
