#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @l: int type number
 * Return: Value of last digit
 */

int print_last_digit(int l)
{
	int l;

	if (l < 0)
	{
		r = -1 * (l % 10);
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = l % 10
		_putchar(r + '0');
		return (r);
	}
}
