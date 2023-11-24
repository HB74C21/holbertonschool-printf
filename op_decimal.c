#include "main.h"
/**
 * printf_int - prints interger
 * @args: argument to print
 * Return: number of characters
*/

int print_int(va_list args)
{
	int n = va_arg(args, int)
    int num, last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}

	_putchar(last + '0');
	return (last);
}
#include "main.h"
/**
 * printf_dec - prints decimal
 * @args: argument to print 
 * Return: number of characters printed 
*/
int op_decimal(va_list, int)
{
    int n = va_arg(args, int)
    int num, last = n % 10;

    if (last < 0)
	{
		last *= -1;
	}

	_putchar(last + '0');
	return (last);
}
