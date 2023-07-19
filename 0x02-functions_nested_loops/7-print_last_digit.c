#include"main"
/**
 * print_last_digit - function print the last digit of number
 *
 *@n: input number we tak mod of it
 *
 *Return: the last idgit of number
 *
 */
int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	return (n%10);
}
