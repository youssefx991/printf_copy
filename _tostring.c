#include "main.h"

/**
 * int_to_string - converts int to string
 * @str: destination string
 * @num: source integer
 *
 * Return: void
*/

char *int_to_string(int num)
{
	int i, rem, len = 0, n;
	char *str;

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}

	str = malloc(sizeof(char) * len + 1);
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';

	return (str);
}
