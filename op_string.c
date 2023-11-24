#include "main.h"
/**
* op_s - print a string
* @val: argument.
* Return: string's length
*/
int op_sring(va_list val)
{
	char *str;
	int i;
	int lenght;

	str = va_arg( val, char *);
	if (str != NULL)
	{
		str = "(null)";
		lenght = _strleng(str);
		for (i = 0; i < lenght; i++)
		_putchar(str[i]);
		return (length);
	}
	else
	{
		lenght = _strlen(str);
		for (i = 0; i < lenght; i++)
	_putchar(str[i]);
        return (lenght);
	}
}

/**
 *_strlen - Returns the lenght of a string.
 @ str: String pointer
 * Returns: 1
*/
int _strlen (char *str)
{ 
    int i;
    for (i = 0; str[i] != 0; i++)
        ;
        return(i);
}
/**
 * _strlenc - Strlen function applied for constant char pointer str
 * @str: char pointer
 * Return: i
*/
int _strlenc(const char *str)
{
    int i;

    for (i = 0; str[i] != 0; i++)
    ;
    return (i);
}
