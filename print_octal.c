#include "main.h"

/**
 * print_octal - prints a number in base eight
 * @n: number to be printed
 *
 * Return: number of byte printed
 */

int print_octal(unsigned int n)
{
        int i = 0;

        if (!n)
                return (i);
        i += print_octal(n / 8);
        _putchar((n % 8) + 48);
        return (i + 1);
}
