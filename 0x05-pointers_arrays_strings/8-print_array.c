#include "main.h"
#include<stdio.h>

/**
 * print_array - prints n alements of an array
 * @a: array
 * @n: number of values to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
