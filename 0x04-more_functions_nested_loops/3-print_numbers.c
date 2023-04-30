#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Prints the following numbers 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar("%d\n", c);
	}
}
