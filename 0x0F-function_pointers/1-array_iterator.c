#include "function_pointers.h"
#include<stdio.h>

/**
 * array_iterator - print each array elem on a newl
 * @array: array
 * @size: size of elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int d;

	if (array == NULL || action == NULL)
		return;
	for (d = 0; d < size; d++)
	{
		action(array[d]);
	}
}
