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

	y = ',';

	for (x = 0; x <= 9; x++)
	{
		putchar ((x % 10) + '0');
		if ((y == ',') && (x != 9))
		{
			putchar (y);
		}

	}

putchar ('\n');
return (0);
}
