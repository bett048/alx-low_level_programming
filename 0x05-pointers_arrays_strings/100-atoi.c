#include "main.h"

/**
 * _atoi - function thaat convert a string to an integer
 * @s: string to convert
 * Return: 0
 */
int _atoi(char *s)
{
	int i;
	int n;
	int signo = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			signo *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	signo *= -1;
		return (n * signo);
}
