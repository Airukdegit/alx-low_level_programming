#include "main.h"

/**
* swap_int - takes two parametres and swaps their values.
*@a: input integer.
*@b: input integer
* Return: 0.
*/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}

