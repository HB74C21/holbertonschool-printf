#include "main.h"

/**
* op_char - function to print a character
* @char: The character to print
* Return: &.
*/
int op_char(va_list val)
{
	char str;

	str = va_arg( val, int)
	_putchar(str);
	return (1);
}
