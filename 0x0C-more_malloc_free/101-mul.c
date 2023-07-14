#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

int multiply(int num1, int num2)
{
	return (num1 * num2);
}
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", ERR_MSG);
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("%s\n", ERR_MSG);
		return (98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
