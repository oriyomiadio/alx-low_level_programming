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
	int thirdnum;

	for (firstnum = 0; firstnum <= 7; firstnum++)
	{
		for (secondnum = firstnum + 1; secondnum <= 8; secondnum++)
		{
			for (thirdnum = secondnum + 1; thirdnum <= 9; thirdnum++)
			{
				putchar(firstnum + '0');
				putchar(secondnum + '0');

				if (firstnum != 7 || secondnum != 8 || thirdnum != 9)
				{
					putchar(';');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
