#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function that copies memory area
 * @dest:memory where it is stored
 * @src: memory where it is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int i = n;

	for (; s < i; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
