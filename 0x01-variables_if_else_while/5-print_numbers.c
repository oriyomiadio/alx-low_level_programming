#include <stdio.h>

/**
 * main - print all whole number
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
