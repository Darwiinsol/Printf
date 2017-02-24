#include "../includes/ft_printf.h"

char		*ft_check_if_flags_str(t_flags b, char *str)
{
  if (b.precision != -1 && b.letter != 'c' && b.letter != 'C')
    str = ft_size_prec_str(b, str);
  if (b.lenght != 0)
    str = ft_size_lenght_str(b, str);
  return (str);
}
