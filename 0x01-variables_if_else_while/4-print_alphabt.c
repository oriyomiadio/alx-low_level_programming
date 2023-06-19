#include <stdio.h>

/**
 * main - print all letters without q and e
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}

	}

	putchar('\n');
	return (0);
}
