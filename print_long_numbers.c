#include "main.h"

/**
 * print_long_number - putchar numbers
 * @list: get the list of argument
 * Return: (the amount of characters printed)
*/

int print_long_number(va_list list)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(list, int);
	div = 1;
	len = 0;

	/*check if the number is positif or not*/
	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
