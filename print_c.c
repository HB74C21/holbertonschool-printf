#include "main.h"
/**
 * print_c - Function that print a type char
 *
 * @ap: This is a list of argument pointed to a type char
 *
 * Return: a integer
*/
int print_c(va_list ap)
{
	char letter;

	letter = va_arg(ap, int);

	return (_putchar(letter));
}
