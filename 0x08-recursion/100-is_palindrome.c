#include "main.h"
/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: the string to calculate the length
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - a function that checks the character recursively for palindrome
 * @s: the string to check
 * @i: the iterator
 * @len: the length of the string
 * Return: 1 for palindrome or 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

/**
 * is_palindrome - A function that checks if a string is a palindrome
 * @s: the string to reverse
 * Return: 1 if it is or 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
