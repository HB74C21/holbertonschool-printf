#include "main.h"
/**
 * op_s - print a string
 * @val: argument.
 * Return: string's length
*/
int op_s(va_list val)
{
//
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
//
{
    va_start (s, val);


    for (i = 0; i < val; i++)
    val += va_arg (s, int);

    va_end(s);
}
}