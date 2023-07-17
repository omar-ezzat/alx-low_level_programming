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
	char ch = '0';

	while (ch <= 'f')
	{
	    if (ch = '9'+1)
            ch = 'a';
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
