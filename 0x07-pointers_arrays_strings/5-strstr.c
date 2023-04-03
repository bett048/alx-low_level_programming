#include "main.h"
/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: AAlways 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *m = needle;

		while (*j == *m && *m != '\0')
		{
			j++;
			m++;
		}
		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
