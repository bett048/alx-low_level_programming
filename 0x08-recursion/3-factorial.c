#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: number whose factorial is to be return
 *
 * Return: factorial of n
 * -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
