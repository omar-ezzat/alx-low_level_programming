#include"main.h"
/**
 * puts_half - prints half of a string,
 * @str: pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i])
		i++;
	n = (i - 1) / 2;
	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
