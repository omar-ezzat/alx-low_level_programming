#include"main.h"
/**
 * _strcmp - compare two srings
 * @s1: string1
 * @s2: string2
 * Return: int number coparizon
 */
int _strcmp(char *s1, char *s2)
{
	int i, sum = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		sum += s[i] - s[i];
	}
	for (; s1[i] != '\0'; i++)
		sum += s1[i];

	for (; s2[i] != '\0'; i++)
		sum -= s2[i];

	return (sum);
}
