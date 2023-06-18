#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: always return 0 (Sucess)
 */
int main(void)
{
	int n;
	int last-n = n % 10

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d and is %d  greater than 5\n", n, last-n);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n);
	} else
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
