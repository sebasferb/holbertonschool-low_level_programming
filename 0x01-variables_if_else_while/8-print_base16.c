#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Putchar: write a single character
 *
*/

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar ((x % 10) + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar (x);
	}
	putchar ('\n');
return (0);
}
