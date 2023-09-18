#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

/**
 * struct specifier_manager - struct to manage specifiers
 * @specifier: input specifier
 * @f: function pointer to print function
*/
typedef struct specifier_manager
{
	char *specifier;
	int (*f)(va_list);
} specifier_manager_t;

/* print_functions.c */
int print_char(va_list);
int print_string(va_list);
int print_string_interval(char *start, char *end);
int print_int(va_list);
int print_percentage(va_list);

/* put_functions.c */
int _puts(char *s);
int _putchar(int n);

/* specifier_functions.c */
int (*get_specifier(char *s))(va_list);
int get_print_function(char *s, va_list);

/* _tostring.c */
char *int_to_string(int num);

/* _printf.c */
int _printf(const char *format, ...);
#endif /* _MAIN_H_ */
