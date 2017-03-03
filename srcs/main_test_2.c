
#include "../includes/ft_printf.h"

int             main()
{
  int a;
  int b;
  
  printf("\033[32m-------------------------------------\033[0m\n");
  printf("\033[32m|        Test Printf d|D|i          |\033[0m\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  a = printf("True => |%+2.5d||%6.5d||%5d||%.d|\n", 42, 42, 42, 0);
  b = ft_printf("Mine => |%+2.5d||%6.5d||%5d||%.d|\n", 42, 42, 42, 0);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  a = printf("True => |%0d||%+0d||%05d||%00d||%011d|\n", 42, 42, 42, 42, 42);
  b = ft_printf("Mine => |%0d||%+0d||%05d||%00d||%011d|\n", 42, 42, 42, 42, 42);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  a = printf("True => |%-2.5d||%-6.5d||%-5d||%-5.3d|\n", 42, 42, 42, 42);
  b = ft_printf("Mine => |%-2.5d||%-6.5d||%-5d||%-5.3d|\n", 42, 42, 42, 42);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  a = printf("True => |%.5d||% d||%  -.5d||% .5d||%-2.5d|\n", 42, 42, 42, 42, 42)\
    ;
  b = ft_printf("Mine => |%.5d||% d||% -.5d||% .5d||%-2.5d|\n", 42, 42, 42, 42, 42);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  a = printf("True => |%+5D||%.5i||%6.5d||%6d||% d||%  -.5d||% .5d|\n", -42, -42,\
	     -42, -42, -42, -42, -42);
  b = ft_printf("Mine => |%+5D||%.5i||%6.5d||%6d||% d||%  -.5d||% .5d|\n", -42, -\
		42, -42, -42, -42, -42, -42);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  printf("\033[32m---------- Test flag l & ll ----------\033[0m\n");
  long int j = 2147483646;
  long long int i = 9223372036854775806;
  a = printf("True => |%ld||%lld|\n", j, i);
  b = ft_printf("Mine => |%ld||%lld|\n", j, i);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  printf("\033[32m---------- Test flag h & hh ----------\033[0m\n");
  short int k = 32766;
  char l = '4';
  a = printf("True => |%hd||%hhd|\n", k, l);
  b = ft_printf("Mine => |%hd||%hhd|\n", k, l);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  printf("\033[32m------------- Test flag z ------------\033[0m\n");
  long m = 32766;
  int n = 42;
  a = printf("True => |%zd||%zd||%zd||%zd||%zd||%zd|\n", m, n, l, k, i, j);
  b = ft_printf("Mine => |%zd||%zd||%zd||%zd||%zd||%zd|\n", m, n, l, k, i, j);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  printf("\033[32m------------- Test flag j ------------\033[0m\n");
  a = printf("True => |%jd||%jd|\n", m, j);
  b = ft_printf("Mine => |%jd||%jd|\n", m, j);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  printf("\033[32m|         Test Printf c|C           |\033[0m\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  printf("%i\n", (int)(a = printf("True => |%-c||%lc||%c||%2c||%-c|%c||%-5c||%5c| = ", 98, 98, 0, 0, 150, 50, 50, 50)));
  printf("%i\n", (int)(b = ft_printf("Mine => |%-c||%lc||%c||%2c||%-c|%c||%-5c||%5c| = ", 98, 98, 0, 0, 150, 50, 50, 50)));
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  printf("\033[32m|         Test Printf x|X           |\033[0m\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  a = printf("True => |%2.5x||%.x||%5x||%5.3x||%#08x|\n", 0x42, 0, 42, -420, 42);
  b = ft_printf("Mine => |%2.5x||%.x||%5x||%5.3x||%#08x|\n", 0x42, 0, 42, -420, 42);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  a = printf("True => |%#X||%0x||%#06x||%00x||%.x|\n", 50, 60, 0x0100, 26, 0);
  b = ft_printf("Mine => |%#X||%0x||%#06x||%00x||%.x|\n", 50, 60, 0x0100, 26, 0);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  a = printf("True => |%2.5X||%6.5X||%5X||%5.3X|\n", 0x42, 42, 42, 420);
  b = ft_printf("Mine => |%2.5X||%6.5X||%5X||%5.3X|\n", 0x42, 42, 42, 420);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  a = printf("True => |%0X||%0X||%05X||%00X||%X|\n", 50, 60, 0x0100, 26, 95);
  b = ft_printf("Mine => |%0X||%0X||%05X||%00X||%X|\n", 50, 60, 0x0100, 26, 95);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  printf("\033[32m|         Test Printf o|O           |\033[0m\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  a = printf("True => |%#2.5o||%6.5o||%5o||%5.3o||%#o|\n", 0x42, 42, 42, 420, 0);
  b = ft_printf("Mine => |%#2.5o||%6.5o||%5o||%5.3o||%#o|\n", 0x42, 42, 42, 420, 0);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  a = printf("True => |%0o||%0o||%05o||%00o||%o||%.o|\n", 50, 60, 0x0100, 26, -95, 0);
  b = ft_printf("Mine => |%0o||%0o||%05o||%00o||%o||%.o|\n", 50, 60, 0x0100, 26, -95, 0);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  printf("\033[32m|         Test Printf u|U           |\033[0m\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  a = printf("True => |%2.5u||%5u||%5u||%5U||%-5.3u||%.u|\n", 0x42, 0, 42, 42, 420, -32);
  b = ft_printf("Mine => |%2.5u||%5u||%5u||%5U||%-5.3u||%.u|\n", 0x42, 0, 42, 42, 420, -32);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  a = printf("True => |%0u||%0u||%05u||%00u||%u||%lU|\n", 50, 60, 0x0100, 26, -95, (unsigned long)4294967296);
  b = ft_printf("Mine => |%0u||%0u||%05u||%00u||% u||%hU|\n", 50, 60, 0x0100, 26, -95, (unsigned long)4294967296);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  printf("\033[32m|       Test Printf percent         |\033[0m\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  a = printf("True => |%%||%.5%||%5.5%||%0%||%05%||%-5%|\n");
  b = ft_printf("Mine => |%%||%.5%||%5.5%||%0%||%05%||%-5%|\n");
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  printf("\033[32m|       Test Printf pointer         |\033[0m\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  int e = 42;
  int *p = &e;
  a = printf("True => |%p|\n", p);
  b = ft_printf("Mine => |%p|\n", p);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  a = printf("True => |%p|\n", "Hello World");
  b = ft_printf("Mine => |%p|\n", "Hello World");
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  printf("\033[32m|         Test Printf s|S           |\033[0m\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  a = printf("True => |%s||%.5s||%5.2s is a string|\n", "Hello World", "Hello World", "This");
  b = ft_printf("Mine => |%s||%.5s||%5.2s is a string|\n", "Hello World", "Hello World", "This");
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  a = printf("True => |%5.2s is a string||%-5.2s is a string|\n", "", "This");
  b = ft_printf("Mine => |%5.2s is a string||%-5.2s is a string|\n", "", "This");
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  a = printf("True => |%-5.2s is a strings||@moulitest: %s|\n", "", NULL);
  b = ft_printf("Mine => |%-5.2s is a strings||@moulitest: %s|\n", "", NULL);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  return(0);
}
