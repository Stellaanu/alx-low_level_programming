#include <main.h>
#include <unistd.h>
/**
 * _putchr - writes the character c to stdout
 * @c: The character to point.
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(i, &c, 1));
}
