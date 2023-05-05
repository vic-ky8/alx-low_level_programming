#include "main.h"
/**
 * _strncpy - Prints a function that copys a string
 * @dest: Input value
 * @src: Input value
 * @n: Input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
