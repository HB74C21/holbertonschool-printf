#include "main.h"
/**
 * print_positive_int - Function that print a positive integer
 *
 * @num: The positive integer to print
 *
 * Return: The length of the integer printed
*/
int print_positive_int(unsigned int num)
{
	int lenght_printed = 0;

	if (num == 0)
		return (_putchar('0'));

	if ((num / 10) != 0)
		lenght_printed += print_positive_int(num / 10);

	return (lenght_printed + _putchar('0' + (num % 10)));
}
