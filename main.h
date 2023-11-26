#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h>
#include <stdarg.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
*/
typedef struct op
{
	char *op;
	int (*f)(va_list ap);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);

#endif
