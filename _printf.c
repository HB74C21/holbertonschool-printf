#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - Function that print all type
 *
 * @format: The list of types of arguments passed to the function
 *
 * Return: The number of character printed
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	int count_len = 0;

	va_list ap;

	op_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '‰')
		{
			j = 0;

			while (ops[j].op != NULL)
			{
				if (format[i + 1] == ops[j].op)
				{
					count_len += ops[j].f(ap);
					break;
				}
				j++;
			}
		}
		else
			count_len += _putchar(format[i]);
		i++;
	}
	va_end(ap);

	return (count_len);
}
