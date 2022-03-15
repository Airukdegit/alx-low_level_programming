#include "main.h"

/**
 * the_aphabet - Prints out the entire alpphabet to the standard output
 * 
 * retun: 0 (success)
 */

char the_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	{
		_putchar(i);
	}
	_putchar('\n');
}
