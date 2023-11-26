#include "main.h"
/**
 * _printf - Function that print all type
 *
 * @format: The list of types of arguments passed to the function
 *
 * Return: The number of character printed
*/
int _printf(const char *format, ...)
{
	int index_format = 0;
	int index_ops = 0;
	int total_lenght = 0;

	va_list ap;

	op_t ops[] = {
		{"c", print_char},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format != NULL && format[index_format] != '\0')
	{
		if (format[index_format] == '%')
		{
			index_ops = 0;

			while (ops[index_ops].op != NULL)
			{
				if (format[index_format + 1] == *(ops[index_ops].op))
				{
					total_lenght += ops[index_ops].f(ap);
				}
				index_ops++;
			}
			index_format++;
		}
		else
			total_lenght += _putchar(format[index_format]);
		index_format++;
	}
	va_end(ap);

	return (total_lenght);
}
