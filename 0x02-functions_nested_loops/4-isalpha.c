#include "main.h"

/**
 * _isalpha - check if character is alphabet character
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || (c >= 'A' && c <= '2'))
		return (1);

	else
		return (0);
}
