#include <stdio.h>

/**
 * main - print comb4
 * ASCII
 * 32 = SPACE
 * 44 = COMMA
 * 48 = 0
 * 49 = 1
 * 50 = 2
 * 55 = 7
 * 56 = 8
 * 57 = 9
 * Return: 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n <= 57; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			for (l = 50; l <= 57; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
