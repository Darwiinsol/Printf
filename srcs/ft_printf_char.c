#include "../includes/ft_printf.h"
/*
char		ft_printf_char_maj(va_list ap, t_flags b)
{
  wchar_t	c;
  char		*str;
  
  c = va_arg(ap, wchar_t);
  str = ft_unicode(c);
  return (str);
}		
*/
int		ft_printf_char(va_list ap, t_flags b, char i)
{
  int		len;
  char		c;
  char		*str;

  str = NULL;
  if (i == 'c')
    {
      b.letter = 'c';
      c = (char)va_arg(ap, int);
      str = ft_strchar(c, 1);
    }
  /* else if (*i == 'C')
    {
      b.letter = 'C'
      str = ft_printf_char_maj(ap, b);
      }*/
  str = ft_check_if_flags_str(b, str);
  len = ft_free_return(&str);
  return (len);
}
