#include <stdio.h>
/**
 *main - Entry piont
 *
 *Description: print numbers base 10
 *
 *Return: 0 (success)
 *
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
