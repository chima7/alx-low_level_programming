#include "main.h"
#include <unistd.h>
/**
 *
 * _putchar - writes the character c to stdout
 * @c: The characterto print 
 *
 * Return: On success 1
 * On error, -1 is returnrd, and error os set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}	
