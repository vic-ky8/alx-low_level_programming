#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - Prints a function that returns the length of a string
 * Return: Always (success)
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
