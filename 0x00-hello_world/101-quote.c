#include <stdio.h>
#include <unisitd.h>

/**
 * main - prints exactly "and that piece of art is useful
 * - Dora Korpar, 2015-10-19",
 *
 *   followed by a new line, to the standard error.
 *
 *   Return: 1 if success.
 */

int main(void)
{
	write("and that piece of art is useful\"- Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
