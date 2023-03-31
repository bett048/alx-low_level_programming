#include "main.h"

/**
 * leet - leet encoding
 * @str: string to be encoded
 * Return: str
 */
char *leet(char *str)
{
	int i, j;
	int j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433770011";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 10; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[i];
		}
	}
	return (str);
}
