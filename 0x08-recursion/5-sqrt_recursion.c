#include "main.h"
/**
 * helperFunction - checks if sqrt of number exists
 * @num: number
 * @psqrt: possible sqrtof number
 *
 * Return: sqrt of number ot -1 for error
 */
int helperFunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperFunction(num, psqrt + 1));
	}
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to find sqrt
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
