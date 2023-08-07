#include"main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: int
 * @c: char
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (NULL);
	while (size--)
		arr[size] = c;
	return (arr);
}
