#include "../includes/ft_printf.h"

char		*ft_join_flags_int(t_flags b, char *str)
{
  if (b.lenght != 0)
    str = ft_size_lenght_int(b, str);
  return (str);
}
