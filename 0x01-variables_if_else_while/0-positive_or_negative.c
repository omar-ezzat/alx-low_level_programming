#include <stdib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *
 *Description: positive or negative
 *
 *Return: 0 (success) 
 *
 *
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		puts("%d is positive\n", n);
	else if (n < 0)
                puts("%d is negative\n", n);
	else
                puts("%d is zero\n", n);

	
	return (0);
}
