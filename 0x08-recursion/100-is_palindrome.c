#include "main.h"
/**
 *  _length - checks the length of a string
 * @s: is the string
 * Return: return the length of the string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp - check if the string is palindrome
 * @i: is the index
 * @len: the length of the string
 * @s: is the string
 * Return: 1 if is palindrome or 0 if not
 */
int checkp(int i, int len, char *s)
{
	if (len > 0)
	{
		if (s[i] == s[len])
		{
			return (checkp(i + 1, len - 1, s));
		}
		else if (s[i] != s[len])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: is the string
 * Return: 1 if is a palindrome otherwise return 0
 */
int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}
