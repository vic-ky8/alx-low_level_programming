#include "main.h"
/**
 * print_numbers - A function that print number from 0 to 9
 * Return: Always (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
