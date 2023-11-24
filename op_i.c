#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int
op_i(va_list val)
{
	va_list op;
	char str;

	str = va_arg(val, int ...)
	_putchar(str);
	return (1);
}
