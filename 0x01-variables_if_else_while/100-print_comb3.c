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
	
	for (x = 48; x <= 57; x++)
	{
		for (y = x + 1; y <= 57; y++)
		{
			putchar(x);
			putchar (y);
			if( x != '8' || y != '9')
			putchar (',');
			putchar (' ');
		}

	}

putchar ('\n');
return (0);
}
