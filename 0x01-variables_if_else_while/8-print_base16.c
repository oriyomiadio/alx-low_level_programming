#include <stdio.h>

/**
 * main - Print 123 and abc
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int num;
	int abc;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (abc = 'a'; abc <= 'f'; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
