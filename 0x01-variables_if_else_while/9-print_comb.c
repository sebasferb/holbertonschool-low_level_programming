#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Putchar: write a single character
 *
 * printf: produce output according to a format
*/

int main(void)
{
	int x;
	int y;
	int z;

	y = ',';
	z = '$';

	for (x = 0; x <= 9; x++)
	{
		putchar ((x % 10) + '0');
		if ((y == ',') && (x != 9))
		{
			putchar (y);
		}
		if (x == 9)
		{
			putchar (z);
		}
	}

putchar ('\n');
return (0);
}
