#include "main.h"
/**
 * print_decimal - Function that prints a decimal integer
 *
 * @ap: This is a list of argument pointed to an integer
 *
 * Return: The lenght of the integer printed
*/
int print_decimal(va_list ap)
{
	int num;

	num = va_arg(ap, int);

	if (num < 0)
	{
		_putchar('-');
		return (print_positive_int(-num) + 1);
	}
	else
		return (print_positive_int(num));
}
