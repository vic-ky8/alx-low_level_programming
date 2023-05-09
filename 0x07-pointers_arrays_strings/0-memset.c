#include "main.h"
/**
 * _memset - A function that fill a block of memory with a specific value
 * @s: Starting address of memory to be filled
 * @b: The desired value
 * @n: no. of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
