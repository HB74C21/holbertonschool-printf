#include "main.h"
#include <stddef.h>
/**
 * print_string - Function that print a string
 *
 * @ap: This is a list of argument pointed to a type string
 *
 * Return: The lenght of a string
*/
int print_string(va_list ap)
{
	char *string;
	int lenght_string = 0;

	string = va_arg(ap, char *);

	if (string == NULL)
	{
		string = "(null)";
	}

	while (string[lenght_string] != '\0')
	{
		_putchar(string[lenght_string]);
		lenght_string++;
	}

	return (lenght_string);
}
