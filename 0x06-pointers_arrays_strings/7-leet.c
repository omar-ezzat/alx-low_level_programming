#include"main.h"
/**
 *
 *
 */
char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', '0', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < 5; i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
				*c = 48 + value[i];
		}
		c++;
	}
	return (cp);
}
