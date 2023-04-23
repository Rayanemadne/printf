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
 * @list: list of arguments
 * Return: 1 (the amount of characters printed)
 */

int print_percent(__attribute__((unused))va_list list)
{
	/*__attribute__((unused)) - mean that the parametre is not used*/
	_putchar('%');
	return (1);
}

/**
 * print_interger - Prints a integer
 * @list: list of argument
 * Return: characters printed
 */
int _ printf(const char *format, ...)
{
	 int printed_chars;
	 /*a list of format and there function*/
	 conver_t f_list[] = {
		 {"d", print_integer},
		 {"i", print_integer},
		 {NULL, NULL}
};
va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	printed_char = mixer(format, list_f, args);
	va_end(args);

	return (printed_char);
}
