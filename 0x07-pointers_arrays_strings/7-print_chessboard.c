#include "main.h"
/**
 * print_chessboard - entry point
 * @a: array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int g;
	int d;

	for (g = 0; g < 8; g++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[g][d]);
		_putchar('\n');
	}
}
