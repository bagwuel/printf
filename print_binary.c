#include "main.h"

/**
 * print_binary - prints a number in binary
 * @n: number to be printed
 *
 * Return: number of byte printed
 */

int print_binary(int n)
{
	int i = 0;
	
	if (!n)
		return (i);
	i += print_binary(n / 2);
	_putchar((n % 2) + 48);
	return (i + 1);
}
