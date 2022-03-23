#include "main.h"

/**
* _strlen - Prints a string then a new line. 
* @str: arg  *str
* Return: 0.
*/
void _putchar(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

