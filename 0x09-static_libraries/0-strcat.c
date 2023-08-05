#include"main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second sting
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
