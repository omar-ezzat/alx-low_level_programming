#include"main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0;
	int diff = 'A' - 'a';

	while (s[i])
	{
		if (s[i] == 9 || s[i] == 10 || s[i] == 32
				|| s[i] == ',' || s[i] == ';' || s[i] == '.'
				|| s[i] == '!' || s[i] == '?' || s[i] == '"'
				|| s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				i++;
				s[i] += diff;
			}
		}
		i++;
	}
	return (s);
}
