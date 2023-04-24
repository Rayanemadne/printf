#include "main.h"

/*Liyah Louis - Rayane Madoune */

/**
 * print_char - prints a character
 *
 * @list: get the list of argument
 *
 * Return: 1 (the amount of characters printed)
*/

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - print a string
 *
 * @list: get the list of argument
 *
 * Return: i (the amount of characters printed)
*/

int print_string(va_list list)
{
	int i;
	char *str;
	/*getting the string*/
	str = va_arg(list, char*);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_percent - Prints a percent
 * @list: get the list of argument
 * Return: 1 (the amount of characters printed)
 */

int print_percent(__attribute__((unused))va_list list)
{
	/*__attribute__((unused)) - mean that the parametre is not used*/
	_putchar('%');
	return (1);
}

/**
 * print_integer - prints an integer
 * @list: get the list of argument
 * Return: (the amount of characters printed)
 */
int print_integer(va_list list)
{
	int num_len; /*to get the number of caracter printed*/

	num_len = print_long_number(list);
	return (num_len);
}

