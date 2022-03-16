#include "main.h"
/**
 * _abs - Function that computees the absolute value of an int
 * @a: Integer type
 * Return: absolute value of a
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
