#include <stdio.h>

/**
 * main - print letter in reverse using putchar
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
