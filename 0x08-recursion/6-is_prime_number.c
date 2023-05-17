#include "main.h"
/**
 * is_divisible - Checks if a number is divisible
 * @num: The number to be checked
 * @div: The divisor
 * Return: If the number is divisible - 0
 * If the number is not divisible - 1
 */
int is_divisible(int num, int div)
{
	if (div == 1)
		return (1);
	if (num % div == 0 && div > 0)
		return (0);
	return (is_divisible(num, div - 1));
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
	return (is_prime_number(n, num - 1));
}
