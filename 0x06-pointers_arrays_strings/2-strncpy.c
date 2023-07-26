#include"main.h"
/**
 * _strncpy - copy string and spaces
 * @dest: string1
 * @src: string2
 * @n: integer limit of copy
 * Return: copy sting
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
