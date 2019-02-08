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

	z = ' ';
	y = ',';

	for (x = 0; x <= 99; x++)
	{
		putchar((x / 10) + '0');
		putchar ((x % 10) + '0');
		if ((y == ',') && (x != 99))
		{
			putchar (y);
		}
		if ((z == ' ') && (x != 99))
		{
			putchar (z);
		}

	}

putchar ('\n');
return (0);
}
