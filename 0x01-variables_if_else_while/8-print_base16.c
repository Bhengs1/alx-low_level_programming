#include <stdio.h>

/**
 * main - print base
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
