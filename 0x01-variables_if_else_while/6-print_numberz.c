#include <stdio.h>

/**
 * main - print numbers using putchar
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	char numbers[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(numbers[i]);
	}
	putchar('\n');
	return (0);
}
