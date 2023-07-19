#include"main.h"
/**
 * print_last_digit - function print the last digit of number
 *
 *@n: input number we take mod of it
 *
 *Return: the last idgit of number
 *
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n >= 0)
	{
		lastdigit = n % 10;
	}
	else
	{
		lastdigit = ((-1 * n) % 10);
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
