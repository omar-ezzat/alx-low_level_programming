#include <stdio.h>
#include <stdlib.h>
/**
 * main - print min num of coins
 * @argc: num of commandline
 * @argv: array of pointers
 * Return: 0-success, non-zero-fail
 */
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;
		int least = 0;
		int money = atoi(argv[1]);
		int coins[] = {25, 10, 5, 2, 1};
		
		if (money < 0)
		{
			printf("0\n");
			return (0);
		}
		for (i = 0; i < 5; i++)
		{
			if (money >= coins[i])
			{
				least += money / coins[i];
				money = money % coins[i];
				if (money % coins[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", least);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
