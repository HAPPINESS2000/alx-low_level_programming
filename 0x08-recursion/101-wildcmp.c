#include "main.h"

/**
 * wildcmp - Write a function that compares two strin
 * s and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @s1: char s1
 * @s2: char s2
 * Return: return 0 always
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
