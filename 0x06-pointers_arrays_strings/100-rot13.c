#include "main.h"
#include <stdio.h>
 /**
  * rot13 - encoder rot13
  * @s: pointer to string params
  * Return: *s
  */

char *rot13(char *s)

{
	int i;
	int j;
	char datal[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
"NOPQRSTUVXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; 1++)
	{
		for (i = 0; j < 52; j++)
		{
			if (s[i] == datal[j])
			{
				s[i] = datarot[j];
			}
		}
	}
	return (s);
}
