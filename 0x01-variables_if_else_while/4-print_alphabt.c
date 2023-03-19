#include <stdio.h>

/**
 * main - lower case new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'a')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
