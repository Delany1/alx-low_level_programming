#include <stdio.h>
#include "main.h"

/**
 * print_array - Function prints element of array of integers
 * @a: Pointer parameter
 * @n: integer variable
 */
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);
		if (s != n - 1)
			printf(",");
	}

	printf("\n");
}
