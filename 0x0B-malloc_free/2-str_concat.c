#include"main.h"
#include<stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	cahr *c;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (; s1[size1] != '\0'; size1++)
	{
		continue;
	}
	for (; s2[size2] != '\0'; size2++)
	{
		continue;
	}

	c = malloc((size1 + size2) * sizeof(char) + 1);

	if (c == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			c[i] = s1[i];
		else
			c[i] = s2[i - size1];
	}
	c[i] = '\0';

	return (c);
}	
