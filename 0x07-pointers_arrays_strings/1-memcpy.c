#include "main.h"
/**
 * _memset - copies mamory area
 * @dest: destinatio memory area
 * @src: source memory area.
 * @n: bytes filled
 * Return: the pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

