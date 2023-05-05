#include "main.h"
/**
 * string_toupper - Prints a function that changes all lowercase to uppercase
 * @n: Pointer
 * Return: n
 */

char *string_toupper(char *n)
{
	int t;

	t = 0;
	while (n[t] != '\0')
	{
		if (n[t] >= 'a' && n[t] <= 'z')
			n[t] = n[t] - 32;
		t++;
	}
	return (n);
}
