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
      if (b.zero != 1 && b.letter != 'x' && b.letter != 'X'))
	str = ft_strjoin(tmp, tmp2);
      else
	str = ftf_join_flags(tmp2, b, tmp);
      free(tmp2);
    }
  return (str);
}
