#include <stdio.h>
/**
*main-Entry point
*Description:print alphabet in lower case then in uppercase;
*Return:Always 0(success)
*/
int main(void)
{
	char ab = 'a';
	char AB = 'A';
	/ "prints a - z" /
	while (ab <= 'z')
	{
		putchar(ab);
		ab++;
	}
	/ "prints A -Z" /
	while (AB <= 'Z')
	{
		putchar(AB);
		AB++
	}
	putchar('\n');
	return (0);
}
