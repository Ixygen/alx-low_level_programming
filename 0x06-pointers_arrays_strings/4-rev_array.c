#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers
 * @a: first param
 * @n: second param
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int i, j, temo;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
	return (0);
}
