#include <stdio.h>

/**
 * main - Print num with commas
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
