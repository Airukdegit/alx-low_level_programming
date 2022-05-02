#include <stdio.h>

/**
 *main - Start point
 *
 *Return: 0 (Success)
 */

int main(void)
{
char last = 'z';
while (last >= 'a')
{
putchar(last);
last--;
}
putchar('\n');
return (0);
}
