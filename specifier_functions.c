#include "main.h"
/**
 * get_specifier - function pointer return suitable print_function
 * @s: format specifier
 *
 * Return: suitable print function or NULL
*/

int (*get_specifier(char *s))(va_list list)
{
	specifier_manager_t specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"%", print_percentage}
	};

	int i;

	for (i = 0; i < 5; i++)
	{
		if (*s == specifiers[i].specifier[0])
			return (specifiers[i].f);
	}

	return (0);
}

/**
 * get_print_function - calls print_func according to format
 * @s: given format
 * @list: list of paramters
 *
 * Return: True if print_func was found
*/
int get_print_function(char *s, va_list list)
{
	int (*f)(va_list list) = get_specifier(s);

	if (f)
		return (f(list));

	return (0);
}

