#include "main.h"
/**
 * print_percent - Function that prints a percent sign
 *
 * @ap: This is a list of arguments
 *
 * Return: Always 1 (the lenght of a percent sign)
*/
int print_percent(va_list ap)
{
	(void)va_arg(ap, int);

	_putchar('%');

	return (1);
}
