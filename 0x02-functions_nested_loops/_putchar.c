#include "main.h"
#include <unisted.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success
 */
int _putcher(char c)
{
	return (write(1, &c, 1));
	
