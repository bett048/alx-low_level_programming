#include "main.h"
/**
 * _memcpy - a function that copy memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r  = 0;
	int i = n;

	for (; c < i; c++)
	{
		dest[i] = src[c];
		n--;
	}
	return (dest);
}
