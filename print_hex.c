#include "main.h"
#include <stdio.h>

/**
 * print_hex - prints a number in base sixteen
 * @n: number to be printed
 * @c: specifier
 *
 * Return: number of byte printed
 */

int print_hex(unsigned int n, char c)
{
	int i = 0;

	if (!n)	
		return (i);
	i += print_hex(n / 16, c);
	if (n % 16 < 10)
		_putchar((n % 16) + 48);
	else
		if (c == 'X')
			_putchar((n % 16) + 55);
		else
			_putchar((n % 16) + 87);
	return (i + 1);
}
