#include <stdio.h>
/**
 *main - Entry piont
 *
 *Description: use putchar fun to print all alphabet
 *
 *Return: 0 (success)
 *
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
