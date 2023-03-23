#include "main.h"

/**
 * print_line - draws a straight line in thr terminal
 * @n: number of times the charcter _ should be print
ed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
