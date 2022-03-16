#include "main.h"

/**
 * print_alphabet_x10 - Prints out the entire alphabet 10 times.
 * retun: 0 (success)
 */

void print_alphabet_x10(void)
{
	int  count_to_ten = 0;

	while (count_to_ten < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		count_to_ten++;
	}

}
