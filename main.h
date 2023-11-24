#ifndef MAIN_H_
#define _MAIN_H
#include <stdarg.h>

int _putchar(char c);
int op_char(char *c);
int _printf(const char *format, ...);
int op_string(va_list val);
int op_percentage(void);
int _strlenc(const char *str);
int _strlen (char *str);
int print_int(va_list args);
int op_decimal(va_list, int);

#endif
