#ifndef MAIN_H
#define MAIN_H

/*Liyah Louis - Rayane Madoune */

/*standard librarys*/
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/**
* struct convert - structure for symbols and functions
*
* @symbol: The symbol like (s / c / i / d ...)
* @f: The function resposible of the symbol
*/

typedef struct convert
{
	/*the symbol c / i / s ...*/
	char *symbol;
	/*the function that is responsible of the symbol*/
	int (*f)(va_list);
} convert_t;


/*main functions*/
int _printf(const char *format, ...);
int mixer(const char *format, convert_t f_list[], va_list arg_list);

/*basic function*/
int _putchar(char c);

/*format function*/
int print_char(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);

#endif
