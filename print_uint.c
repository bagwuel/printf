#include "main.h"

/**
 * print_uint - prints an integer.
 * @n: integer to be printed
 *
 * Return: number of char in number
 */

int print_uint(unsigned int n)
{
	int i = 0;
	
        if (n == 0)
	{
		_putchar('0');
		i++;
		return (i);
	}
	if (n / 10)
		i += print_uint(n / 10);
	_putchar(n % 10 + 48);
	return (i + 1);
}
