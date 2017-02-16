#include "../includes/ft_printf.h"

char		*ft_is_blank(char *str)
{
  char		*tmp;

  tmp = str;
  str = ft_strjoin(" ", tmp);
  free(tmp);
  return (str);
}
