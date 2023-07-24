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

	if (i % 2)
		n = i / 2;
	else
		n = (i - 1) / 2;

	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
