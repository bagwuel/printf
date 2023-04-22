#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to be printed.
 */

void print_number(int n)
{
	unsigned int nb;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	nb = n;
	if (nb / 10)
		print_number(nb / 10);
	_putchar(nb % 10 + 48);
}
