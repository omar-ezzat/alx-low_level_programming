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
	int n1 = 0;
	int n2;

	while (n1 <= 8)
	{
		n2 += n1;
		while (n2 <= 9)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');
			if (n2 != 9 && n1 !=8)
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}
		
	putchar('\n');

	return (0);
}
