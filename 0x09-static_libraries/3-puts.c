#include "main.h"
/**
 * _puts - Prints a string to stdout
 * @str: the string to print
 * return: _putchar prints a neww line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
