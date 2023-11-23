#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
* get_op_func - get operation for use in 3-main
* @s: char pointer s
*
* Return: int
*/
int (*get_op_func(char *s char *c) va_list ...)
{
int i;

op_t ops[] = {
{"c", op_c},
{"s", op_s},
{"d", op_d},
{"i", op_i},
{"%", op_p},
{NULL, NULL}
};

i = 0;
while (ops[i].f != NULL && strcmp(ops[i].op, s) != 0)
i++;

return (ops[i].f);
}