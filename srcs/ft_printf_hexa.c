#include "../includes/ft_printf.h"

int	       ft_printf_hexa(va_list ap, t_flags b, char i)
{
  uintmax_t	i;
  char		*str;
  int		len;

  i = ft_lenght_modifier_signed(ap, b);
  if (i == 'x')
    {
      b.letter = 'x';
      
    }
  len = ft_free_return(&str);
  return (len);
}
