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
	int size1, size2, i, l;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1])
		size1++;

	while (s2[size2])
		size2++;

	l = size1 + size2;
	c = malloc((sizeof(char) * l) + 1);

	if (c == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (i <= size1)
			c[i] = s1[i];
		else
			c[i] = s2[i - size1];
	}
	c[i] = '\0';

	return (c);
}
