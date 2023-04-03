#include "main.h"

/**
 * _memset - fill block of memory
 * @s: start add. of memory
 * @b: desired value
 * @n: number of bytes
 *
 * Return: changed array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
