#include "../includes/ft_printf.h"

static char		*ft_size_lenght(t_flags b, char *str)
{

  char		*tmp;
  int		len;

  len = b.lenght - ft_strlen(str) + 1;
  if (b.lenght <= (int)ft_strlen(str))
    return (str);
  else
    {
      tmp = (char *)malloc(sizeof(char) * (len));
      if (b.zero == 1 && b.minus != 1)
	tmp = ft_memset(tmp, '0', b.lenght - ft_strlen(str));
      else
	tmp = ft_memset(tmp, ' ', b.lenght - ft_strlen(str));
      tmp[b.lenght - ft_strlen(str)] = '\0';
      if (b.minus == 1)
	str = ft_strjoin(str, tmp);
      else
	str = ft_strjoin(tmp, str);
      free(tmp);
    }
  return (str);
}

static char		*ft_size_prec(t_flags b, char *str)
{
  char		*tmp;

  tmp = (char *)malloc(sizeof(char) * (b.precision + 1));
  tmp = ft_memcpy(tmp, str, b.precision);
  tmp[b.precision] = '\0';
  str = ft_strdup(tmp);
  free(tmp);
  return (str);
}

static char		*ft_check_if_flags(t_flags b, char *str)
{
  if (b.lenght != 0)
    str = ft_size_lenght(b, str);
  if (b.precision != -1)
    str = ft_size_prec(b, str);
  return (str);
}

int		ft_printf_percent(t_flags b)
{
  char		*str;
  int		len;
  
  b.letter = '%';
  str = ft_strdup("%");
  str = ft_check_if_flags(b, str);
  if (b.precision == 0 && b.lenght != 0)
    str[ft_strlen(str) - 1] = '%';
  if (b.precision == 0 && b.lenght == 0)
    str = ft_strdup("%");
  len = ft_free_return(&str);
  return (len);
}
