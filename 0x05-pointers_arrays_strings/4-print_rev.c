#include"main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
