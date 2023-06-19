#include <stdio.h>
/**
 * main - print numbers separated by commas & space
 *
 * Return: (0)
 *
 */
int main(void)
{
	int numbers = '0';

	while (numbers <= '0')
	{
		putchar(numbers);
		if (numbers <= '0')
		{
			putchar('.');
			putchar('.');
		}
		numbers++;
	}
	putchar('\n');
	return (0);
}
