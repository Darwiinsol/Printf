#include "../includes/ft_printf.h"

int		ft_free_return(char **str)
{
  int		len;

  len = 0;
  if (str == NULL)
    return (0);
  ft_putstr(*str);
  len = ft_strlen(*str);
  free(*str);
  return (len);
}
