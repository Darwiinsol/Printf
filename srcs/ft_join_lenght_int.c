#include "../includes/ft_printf.h"

char		*ft_join_lenght_int(t_flags b, char *tmp, char *str)
{
  char *tmp2;

  if (b.minus == 1)
    {
      tmp2 = str;
      str = ft_strjoin(tmp2, tmp);
      free(tmp2);
    }
  else
    {
      tmp2 = str;
      str = ftf_join_flags(tmp2, b, tmp);
      free(tmp);
    }
  return (str);
}
