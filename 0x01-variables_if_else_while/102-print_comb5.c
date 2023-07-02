#include <stdio.h>
/**
 * main - print 0 to 99
 *
 * Return: (0)
 *
 */
int main(void)
{
	int i = 0;

	while (i <= 99)
	{
		int j = 0;

		while (j <= 99)
		{
		int firstDigit1 = i / 10;
		int secondDigit1 = i % 10;
		int firstDigit2 = j / 10;
		int secondDigit2 = j % 10;

		putchar(firstDigit1 + '0');
		putchar(secondDigit1 + '0');
		putchar(' ');
		putchar(firstDigit2 + '0');
		putchar(secondDigit2 + '0');
		putchar(',');
		putchar(' ');

		j++;
		}
	i++;
	}

	return (0);
}
