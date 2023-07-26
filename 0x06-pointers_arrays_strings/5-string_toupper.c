#include"main.h"
/**
 * string_toupper - changes all lowercase
 * letters of a string to uppercase
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;
	int diff = 'A' - 'a';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += diff;
	}
	return (s);
}
