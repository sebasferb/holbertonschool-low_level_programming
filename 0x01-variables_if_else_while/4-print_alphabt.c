#include <stdio.h>


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

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
		{
		putchar (x);
		}
	}
	putchar ('\n');
return (0);
}
