#include"main.h"
/**
 * puts2 - prints every other character
 * @str: pointer to string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(i % 2))
			_putchar(str[i]);
	}
	_putchar('\n');
}
