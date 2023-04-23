#include "main.h"

/*Liyah Louis - Rayane Madoune */

/**
 * mixer - Receives the main string and do the mix
 * @format: string that cointain format
 * @f_list: lsit of all existing format
 * @arg_list: list of the argument
 * Return: (the amount of characters printed)
 */

int mixer(const char *format, convert_t f_list[], va_list arg_list)
{
	int total_printed;
	int i, j, tmp = 0;

	/*loop through every caracter in the main string*/
	for (i = 0; format[i] != '\0'; i++)
	{ /*check if the format is % */
		if (format[i] == '%')
		{ /*loop through every symbol of the list*/
			for (j = 0; f_list[j].symbol != NULL; j++)
			{
				/*check if format == list symbol*/
				if (format[i + 1] == f_list[j].symbol[0])
				{
					tmp = f_list[j].f(arg_list);
					if (tmp == -1)
						return (-1);
					total_printed += tmp;
					break; /*exit the loop*/
				}
			}
			if (f_list[j].symbol == NULL && format[i + 1] != ' ')
			{ /*if no symbol found print the % and the nex char normal*/
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					total_printed = total_printed + 2;
				}
				else
					return (-1);
			}
			i++;/*skipping the format*/
		}
		else /*if is a normal caratere*/
		{
			_putchar(format[i]);
			total_printed++;
		}
	}
	return (total_printed);
}
