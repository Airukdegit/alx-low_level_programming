#include "main.h"

/**
 * print_alphabet - Prints out the entire alpphabet to the standard output
 * retun: 0 (success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	{
		_putchar(i);
	}
	_putchar('\n');
}
