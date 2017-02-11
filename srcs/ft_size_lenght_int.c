#include "../includes/ft_printf.h"

char		*ft_size_lenght_int(t_flags b, char *str)
{
  char	*tmp;

  if (b.lenght == 0)
    return (str);
  else if (b.lenght <= (int)ft_strlen(str))
    return (str);
  else
    {
      tmp = (char *)malloc(b.lenght - ft_strlen(str));
      tmp = ft_memset(tmp, ' ', b.lenght - ft_strlen(str));
      tmp[b.lenght - ft_strlen(str)] = '\0';
      str = ft_join_lenght_int(b, tmp, str);
      free(tmp);
    }
  return (str);
}
