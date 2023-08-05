#include"main.h"
/**
 * _memset - fills memory with consatnt
 * @s: pointer to memory
 * @b: consatnt
 * @n: max bytes
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}
	return (s);
}
