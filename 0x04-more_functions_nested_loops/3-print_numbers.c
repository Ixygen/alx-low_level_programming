#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 * followed by a new line
 * @n: int type to represent the digits
 * Return: value of n
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
