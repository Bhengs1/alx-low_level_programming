#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: mem where stored
 * @src: mem where copied
 * @n: number of bytes
 *
 * Return: copied memory with n byted charged
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int z = n;

	for (; a < z; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
