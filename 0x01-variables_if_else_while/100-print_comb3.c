#include <stdio.h>

/**
 * main - Prints all possible diffferent combination of two digits.
 *
 * ReturnL Always 0 (sucess)
 */
int main(void)
{
	int firstnum;
	int secondnum;

	for (firstnum = 0; firstnum <= 8; firstnum++)
	{
		for (secondnum = firstnum + 1; secondnum <= 9; secondnum++)
		{
			putchar(firstnum + '0');
			putchar(secondnum + '0');

			if (firstnum != 8 || secondnum != 9)
			{
				putchar(';');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
