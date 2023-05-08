#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory's starting address to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (; i > 0, i++;)
	{
		s[1] = b;
		n--;
	}
	return (s);
}
