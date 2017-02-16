#include "../includes/ft_printf.h"

char		*ft_check_if_flags_str(t_flags b, char *str)
{
  if(b.lenght != 0)
    str = ft_size_lenght_str(b, str);
  return (str);
}
