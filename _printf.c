#include "main.h"

/*Liyah Louis - Rayane Madoune */

/**
 * _printf - a replication of printf
 *
 * @format: string
 *
 * Return: (the amount of characters printed)
*/

int _printf(const char *format, ...)
{
	int total_printed;
	/*a list of format and there function*/
	convert_t list_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		/* ----- add the symbol with function here----*/
		{NULL, NULL}
	};

	/*get the arguments ... */
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	total_printed = mixer(format, list_f, args);
	va_end(args);

	/*return A total count of the characters printed*/
	/* printf("\n the total of cracter printed : %d", total_printed); */
	return (total_printed);
}
