#include "../includes/ft_printf.h"

char		*ft_is_plus(t_flags b, char *str)
{
  char		*tmp;

  if (b.plus == 1 && (b.letter == 'i' || b.letter == 'D'))
    {
      tmp = str;
      str = ft_strjoin("+", tmp);
      free(tmp);
    }
  return(str);
}
