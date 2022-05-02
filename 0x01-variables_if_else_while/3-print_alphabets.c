#include <stdio.h>
#include <stdlib.h>
/**
 * main - Start point
 *
 * Return: 0 success
 */

int main(void)
{
	char small = 'a';
	char big = 'A';

	while (small <= 'z')
	{
		putchar (small);
		small++;
	}
	while (big <= 'Z')
	{
		putchar (big);
		big++;
	}

	putchar ('\n');

	return (0);
}
