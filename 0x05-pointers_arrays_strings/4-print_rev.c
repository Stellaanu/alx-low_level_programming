#include "main.h"
/**
 * print_revs - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longa = 0;
	int o;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	s--;
	for (o = longa; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
