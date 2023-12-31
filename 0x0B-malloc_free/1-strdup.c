#include"main.h"
#include <stdlib.h>
/**
 * _strdup - pointer to a newly allocated space
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	{
		continue;
	}
	m = malloc(size * sizeof(*str) + 1);
	if (m == 0)
		return (NULL);

	for (; i < size; i++)
		m[i] = str[i];

	return (m);
}
