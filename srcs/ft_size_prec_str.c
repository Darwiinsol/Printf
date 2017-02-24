#include "../includes/ft_printf.h"

char		*ft_size_prec_str(t_flags b, char *str)
{
  char		*tmp;

  if (!(tmp = (char *)malloc(sizeof(char) * (b.precision + 1))))
    return (NULL);
  tmp = ft_memcpy(tmp, str, b.precision);
  tmp[b.precision] = '\0';
  str = ft_strdup(tmp);
  free(tmp);
  return(str);
}
