#include "main.h"
/**
 * _strlen - return the string length
 * @s: string whose lenth to be printed
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
