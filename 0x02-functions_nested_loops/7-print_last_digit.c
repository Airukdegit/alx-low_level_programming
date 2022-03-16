#include "main.h"
/**
 * print_last_digit - Prins thhe last digit of a number
 * @a: Integer type
 * Return: Value of the last digit
 */
int print_last_digit(int a)
{
	int n;

	if (a < 0)
	{
		n = -1 * (a % 10);
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = a % 10;
		_putchar(n + '0');
		return (n);
	}
}
