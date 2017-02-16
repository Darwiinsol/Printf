
#include "../includes/ft_printf.h"

int             main()
{
  int a;
  int b;
  
  printf("\033[32m-------------------------------------\033[0m\n");
  printf("\033[32m|         Test Printf d|D|i          |\033[0m\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  a = printf("True => |%+2.5d||%6.5d||%5d||%5.3d|\n", 42, 42, 42, 42);
  b = ft_printf("Mine => |%+2.5d||%6.5d||%5d||%5.3d|\n", 42, 42, 42, 42);
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
  printf("\033[32m|          Test Printf c|C           |\033[0m\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  a = printf("True => |%-c||%lc||%c||%c||%-c|%c||%-5c||%5c|\n", 98, 98, 42, 24, 150, 50, 50, 50);
  b = ft_printf("Mine => |%-c||%lc||%c||%c||%-c|%c||%-5c||%5c|\n", 98, 98, 42, 24, 150, 50, 50, 50);
  if (a != b)
    printf("\033[31;1m[ FAIL ]\033[0m\n\n");
  else
    printf("\033[32;1m[ OK ]\033[0m\n\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  printf("\033[32m|          Test Printf x|X           |\033[0m\n");
  printf("\033[32m-------------------------------------\033[0m\n");
  a = printf("True => |%+2.5d||%6.5d||%5d||%5.3d|\n", 42, 42, 42, 42);
  b = ft_printf("Mine => |%+2.5d||%6.5d||%5d||%5.3d|\n", 42, 42, 42, 42);
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
  return(0);
}
