#include "main.h"
/**
 * find_sqrt - Finds the square root of an inputted num
 * @num: The number to find the square root of
 * @root: The root to be tested
 * Return: square root if it has a natural square root,
 * or -1 if it doesn't.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to return the square root of
 * Return: natural square root n if it has a natural square root
 * or -1 if it doesn't.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
