#include <stdio.h>
#include <stdlib.h>

/**
 *main - Start point
 *
 *Return: 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	putchar ('\n');
	return (0);
}
