#include "../includes/ft_printf.h"

char		*ft_size_lenght_int(t_flags b, char *str)
{
  char	*tmp;

  if (b.lenght <= (int)ft_strlen(str))
    return (str);
  else
    {
      if (!(tmp = (char *)malloc(b.lenght - ft_strlen(str) + 1)))
	return (NULL);
      if (b.zero == 1 && b.minus != 1 && b.precision == -1)
	tmp = ft_memset(tmp, '0', b.lenght - ft_strlen(str));
      else
	tmp = ft_memset(tmp, ' ', b.lenght - ft_strlen(str));
      tmp[b.lenght - ft_strlen(str)] = '\0';
      str = ft_join_lenght_int(b, tmp, str);
      //free(tmp);
    }
  return (str);
}
