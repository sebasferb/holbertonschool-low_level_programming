#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Putchar: write a single character
 *
 * tolower: converts the uppercase letter to lowercase
*/

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar (tolower(x));
	}

return (0);
}
