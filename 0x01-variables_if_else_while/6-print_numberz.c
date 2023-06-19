#include <stdio.h>

/**
 * main - print numbers using putchar
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
