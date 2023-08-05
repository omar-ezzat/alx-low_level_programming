#include"main.h"
/**
 * _strncat - concatenates two strings
 * but use n bytes from src
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: pointer to stirng char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;


	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
