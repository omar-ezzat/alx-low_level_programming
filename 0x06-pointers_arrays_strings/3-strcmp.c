#include"main.h"
/**
 * _strcmp - compare two srings
 * @s1: string1
 * @s2: string2
 * Return: int number coparizon
 */
int _strcmp(char *s1, char *s2)
{
	int sum = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			sum = ((int)*s1 - (int)*s2);
			break;
		}
		s1++;
		s2++;
	}
	return (sum);
}
