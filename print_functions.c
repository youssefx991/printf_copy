#include "main.h"

/**
 * print_char - prints next character in parameters
 * @list: list of paramters
 *
 * Return: length of printed
*/
int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

/**
 * print_string - prints next string in parameters
 * @list: list of paramters
 *
 * Return: length of printed string
*/
int print_string(va_list list)
{
	return (_puts(va_arg(list, char *)));
}

/**
 * print_string_interval - prints string from start to end
 * @start: start printing address
 * @end: end printing address
 *
 * Return: length of printed print_string
*/
int print_string_interval(char *start, char *end)
{
	int total = 0;

	while (start <= end)
	{
		total += _putchar(*start);
		start++;
	}
	return (total);
}

/**
 * print_int - prints next integer in paramters
 * @list: list of parameters
 *
 * Return: number of characters printed
*/
int print_int(va_list list)
{
	int num = va_arg(list, int), sum;
	char *str;

	/*char str[(int)((ceil(log10(num)) + 1) * sizeof(char))];*/

	/*sprintf(str, %d, num);*/
	sum = 0;

	if (num < 0)
	{
		sum += _putchar('-');
		num *= -1;
		
	}
	str = int_to_string(num);

	sum += _puts(str);

	return (sum);
}


/**
 * print_percentage - prints a '%'
 * @list: list of parameters
 *
 * Return: number of characters printed
*/
int print_percentage(va_list list)
{
	(void)list;
	return (_putchar('%'));
}


