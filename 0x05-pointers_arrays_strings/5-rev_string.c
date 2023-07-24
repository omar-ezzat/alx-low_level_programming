#include"main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char temp;
	
	j = 0;
	while (s[j])
		j++;
	for (i = 0; i < j; i++)
	{
		j--;
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
