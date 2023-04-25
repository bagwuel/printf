#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to be printed
 *
 * Return: number of char in number
 */

int print_number(int n)
{
	unsigned int num;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		i++;
		return (i);
	}
	if (n < 0)
	{
		_putchar('-');
		i++;
		num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num / 10)
		i += print_number(num / 10);
	_putchar(num % 10 + 48);
	return (i + 1);
}
