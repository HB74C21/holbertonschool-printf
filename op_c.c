#include "main.h"

/**
* op_c - function to print one character
*
* @c: The character to print
*
* Return: The value of the character c
*/
int op_c(char *c)
{
    return (write(1, &c, 1));
}
