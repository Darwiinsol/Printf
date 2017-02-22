/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 13:38:54 by apissier          #+#    #+#             */
/*   Updated: 2017/02/06 12:09:34 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <locale.h>

int			main()
{
  	setlocale(LC_ALL, "en_US.utf8");
	printf("\033[32m          -----Test Printf %% -----\033[0m\n");
	printf("%s %%\n", "Printf avec 2 % :");
////////////////////////////////////////////////////////////
	printf("\033[32m          -----Test Printf c|C -----\033[0m\n");
	printf("Printf (116) : %c\n", 116);
	printf("Printf (42) : %c\n", 42);
	printf("%-c\n%c\n", 42, 42);
  	printf("Printf (C116) : %C\n", 116);
  	printf("Printf (C42) : %C\n", 42);
  	printf("|%-C||%C||%lc||%5C|\n", 42, 42, 42, 42);
///////////////////////////////////////////////////////////
	printf("\033[32m          -----Test Printf d|D -----\033[0m\n");
	printf("Printf (+) : |%+2.5d||%+6.5d||%+5d||%+5.3d|\n", 42, 42, 42, 42);
	printf("Printf (-) : |%-2.5d||%-6.5d||%-5d||%-5.3d|\n", 42, 42, 42, 42);
	printf("Printf ( ) : |%05d||%.5d||%6.5d||%6d||% d||% -.5d||% .5d|\n", 42, 42, 42, 42, 42, 42, 42);
	printf("Printf ( ) : |%06.5d||%6.5d||%0.5d||%.5d||%05d|\n", 42, 42, 42, 42, 42);
 	printf("Printf (5d)- :     |%5d|\n", -42);
	printf("Printf (5D)- :     |%5D|\n", -42);
	printf("Printf (D)- :	   |%D|\n", -10);
	printf("Printf (5d)+ :     |%5d|\n", 42);
	printf("Printf (5D)+ :     |%5D|\n", 42);
 	printf("Printf (05d)- :    |%05d|\n", -42);
	printf("Printf (05d)+ :    |%05d|\n", 42);
	printf("Printf (.5d)- :    |%.5d|\n", -42);
	printf("Printf (.5d)+ :    |%.5d|\n", 42);
	printf("Printf (2.5d)- :   |%2.5d|\n", -42);
	printf("Printf (2.5d)+ :   |%2.5d|\n", 42);
	printf("Printf (7.5d)- :   |%7.5d|\n", -42);
	printf("Printf (7.5d)+ :   |%7.5d|\n", 42);
	printf("Printf (-7.5d)- :  |%-7.5d|\n", -42);
	printf("Printf (-7.5d)+ :  |%-7.5d|\n", 42);
	printf("Printf (-10.5d)- : |%-10.5d|\n", -42);
	printf("Printf (-10.5d)+ : |%-10.5d|\n", -42);
	printf("Printf (10.5d)- :  |%10.5d|\n", -42);
	printf("Printf (10.5d)+ :  |%10.5d|\n", 42);
	printf("Printf (+10.5d)- : |%+10.5d|\n", -42);
	printf("Printf (+10.5d)+ : |%+10.5d|\n", 42);
	printf("Printf (3.3d) :    |%03.3d|\n", 42424242);
	printf("\033[32m          -----Test Printf d avec flag l -----\033[0m\n");
	long int j = 2147483646;
	printf("long int j       =     2147483646\n");
	printf("Printf (ld >> j) :     |%ld|\n", j);
	printf("\033[32m          -----Test Printf d avec flag ll -----\033[0m\n");
	long long int i = 9223372036854775806;
	printf("long long int i  =     9223372036854775806\n");
	printf("Printf (lld >> i) :    |%lld|\n", i);
	printf("\033[32m          -----Test Printf d avec flag h -----\033[0m\n");
	short int k = 32766; 
	printf("short int k      =           32766\n");
	printf("Printf (hd >> k) :           |%hd|\n", k);
	printf("\033[32m          -----Test Printf d avec flag hh -----\033[0m\n");
	char l = '4'; 
	printf("char l            =           4\n");
	printf("Printf (hhd >> l) :           |%hhd|\n", l);
	char m = 'a'; 
	printf("char m            =           a\n");
	printf("Printf (hhd >> m) :           |%hhd|\n", m);
	printf("\033[32m          -----Test Printf d avec flag j -----\033[0m\n");
	long n = 32766; 
	printf("long n           =           32766\n");
	printf("Printf (jd >> n) :           |%jd|\n", n);
	printf("\033[32m          -----Test Printf d avec flag z -----\033[0m\n");
	long o = 32766; 
	printf("long n           =           32766\n");
	printf("Printf (zd >> o) :           |%zd|\n", o);
	long long q = 32766; 
	printf("long long q      =           32766\n");
	printf("Printf (zd >> q) :           |%zd|\n", q);
	int r = 21474836;
	printf("int r             =          21474836\n");
	printf("Printf (zd >> r) :           |%zd|\n", r);
	short int s = 32766; 
	printf("short int s      =           32766\n");
	printf("Printf (zd >> s) :           |%zd|\n", s);
///////////////////////////////////////////////////////////
	printf("\033[32m          -----Test Printf s -----\033[0m\n");
	printf("Printf Yeah :     |%-s|\n", "Yeah");
	printf("Printf Yeah :     |%-4.3s|\n", "Yeah");
	printf("Printf Yeah :     |%4.3s|\n", "Yeah");
	printf("Printf Yeah :	  |%S|\n", L"é");
///////////////////////////////////////////////////////////
	printf("\033[32m          -----Test Printf x|X -----\033[0m\n");
	printf("Printf (x)- :      |%x|\n", -42);
  	printf("Printf (x)+ :      |%x|\n", 42);
	printf("Printf (X)- :      |%X|\n", -42);
	printf("Printf (X)+ :      |%X|\n", 42);
	printf("Printf (.5x)- :    |%.5x|\n", -42);
	printf("Printf (5X)- :     |%5X|\n", -42);
	printf("Printf (5X)+ :     |%5X|\n", 42);
	printf("Printf (05X)- :    |%05X|\n", -42);
	printf("Printf (05X)+ :    |%05X|\n", 42);
	printf("Printf (.5X)- :    |%.5X|\n", -42);
	printf("Printf (.5x)+ :    |%.5x|\n", 42);
	printf("Printf (2.5x)- :   |%2.5x|\n", -42);
	printf("Printf (2.5x)+ :   |%2.5x|\n", 42);
	printf("Printf (7.5x)- :   |%7.5x|\n", -42);
	printf("Printf (7.5x)+ :   |%7.5x|\n", 42);
	printf("Printf (-7.5x)- :  |%-7.5x|\n", -42);
	printf("Printf (-7.5x)+ :  |%-7.5x|\n", 42);
	printf("Printf (-10.5x)- : |%-10.5x|\n", -42);
	printf("Printf (-10.5x)+ : |%-10.5x|\n", -42);
	printf("Printf (-10.5X)+ : |%-10.5X|\n", -42);
	printf("Printf (10.5x)- :  |%10.5x|\n", -42);
	printf("Printf (10.5x)+ :  |%10.5x|\n", 42);
	printf("Printf (3.3x) :    |%03.3x|\n", 42424242);
	printf("Printf (3.3X) :    |%03.3X|\n", 42424242);
///////////////////////////////////////////////////////////
	printf("\033[32m          -----Test Printf o|O -----\033[0m\n");
	printf("Printf (42) :   |%#o||%#5o||%5o||%.5o|\n", 0, 42, 0, 0);
	printf("Printf (.7) :   |%.7o|\n", 42);
	printf("Printf (.7)- :  |%.7o|\n", -42);
	printf("Printf (#.7) :  |%#.7o|\n", 42);
	printf("Printf (#.7)- : |%#.7o|\n", -42);
	printf("Printf (#) :    |%#o|\n", 42);
	printf("Printf (#)- :   |%#o|\n", -42);
	printf("Printf ( ) :    |%o|\n", 42);
	printf("Printf ( )- :   |%o|\n", -42);
  	printf("Printf (O) :    |%O|\n", 42);
  	printf("Printf (O)- :   |%O|\n", -42);
///////////////////////////////////////////////////////////
	printf("\033[32m          -----Test Printf u|U -----\033[0m\n");
	printf("Printf (42 u) :   |%u|\n", 42);
	printf("Printf (42 U) :   |%U|\n", 42);
	printf("Printf (-42 u) :  |%u|\n", -42);
	printf("Printf (-42 U) :  |%U|\n", -42);
	printf("Printf (10) :     |%u|\n", 10);
	printf("Printf (-10) :    |%u|\n", -10);
	printf("%05%\n");
	int a = 42;
	int *p = &a;
	printf("\033[32m          -----Test Printf p -----\033[0m\n");
	printf("Printf : |%p|\n", p);
  	return(0);
}
