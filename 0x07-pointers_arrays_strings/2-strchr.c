#include "main.h"
/**
 * _strchr - entry point
 * @s: input
 * @c: input
 * Return: Always 0(success)
 */
char *_strchr(char *s, char c)
{
	unsigned int i

		int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i] == c);
	}
	return (0);
}
