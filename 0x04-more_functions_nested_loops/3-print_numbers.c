#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
