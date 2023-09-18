#include "main.h"

/**
 * _puts - prints string
 * @s: string to be printed
 *
 * Return: string length
*/
int _puts(char *s)
{
	char *start = s;

	while (*s)
		_putchar(*s++);

	return (s - start);
}

/**
 * _putchar - prints character
 * @n: character to be printed
 *
 * Return: char length
*/
int _putchar(int n)
{
	return (write(1, &n, 1));
}

