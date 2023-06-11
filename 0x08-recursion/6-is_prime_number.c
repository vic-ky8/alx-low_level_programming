#include "main.h"
/**
 * actual_prime - Checks if a number is prime recursively
 * @n: The number to be checked
 * @i: The iterator
 * Return: If the number is divisible - 0
 * If the number is not divisible - 1
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 * @n: number to evaluate
 * Return: 1 if it a prime number or 0 if it not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
