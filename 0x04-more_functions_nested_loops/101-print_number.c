#include "main.h"
#include "studio.h"
/**
 * prints_integer - Prints an integer,
 * @n: The integer to prints.
 *  Return: Nothing!
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	int power = 1;
	int temp = n;

	while (temp > 9)
	{
		power *= 10;
		temp /= 10;
	}

	while (power > 0)
	{
		int digit = n / power;

		_putchar('0' + digit);
		n %= power;
		power /= 10;
	}
}

