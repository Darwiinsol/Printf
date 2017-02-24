#include "../includes/ft_printf.h"

char		*ftf_join_flags(char *tmp2, t_flags b, char *tmp)
{
  if (tmp2[0] == '-' && b.zero == 1)
    tmp2 = ft_strjoin("-", ft_strjoin(tmp, &tmp2[1]));
  else if ((tmp2[0] =='+' || b.plus == 1) && b.zero == 1)
    tmp2 = ft_strjoin("+", ft_strjoin(tmp, &tmp2[1]));
  else if ((tmp2[0] ==' ' || b.plus == 1) && b.zero == 1)
    tmp2 = ft_strjoin(" ", ft_strjoin(tmp, &tmp2[1]));
  else if (tmp2[0] == '0' && tmp2[1] == 'x' && b.zero == 1)
    tmp2 = ft_strjoin("0x", ft_strjoin(tmp, &tmp2[2]));
  else if (tmp2[0] == '0' && tmp2[1] =='X' && b.zero == 1)
    tmp2 = ft_strjoin("0X", ft_strjoin(tmp, &tmp2[2]));
  else
    tmp2 = ft_strjoin(tmp, tmp2);
  free(tmp);
  return (tmp2);
}
