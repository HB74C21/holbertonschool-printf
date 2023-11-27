#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h>
#include <stdarg.h>
/**
 * struct op - Struct op
 *
 * @op: This is the format specifier
 * @function: This is a pointer of function
*/
typedef struct op
{
	char *op;
	int (*function)(va_list ap);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int print_decimal(va_list ap);
int print_integer(va_list ap);
int print_positive_int(unsigned int num);

#endif
