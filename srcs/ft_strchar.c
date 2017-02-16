#include "../includes/ft_printf.h"

char		*ft_strchar(char c, size_t size)
{
  char	*str;

  if(!(str = (char *)malloc(size + 1)))
    return (NULL);
  ft_memset(str, c, size);
  str[size] = '\0';
  return (str);
}
