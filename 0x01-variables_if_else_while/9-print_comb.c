#include <stdio.h>
/**
 *main - Entry piont
 *
 *Description: use putchar fun to print numbers
 *
 *Return: 0 (success)
 *
*/
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
