#include "3-calc.h"
/**
 * op_add - A function that returns the sum of two numbers
 * @i: The first number
 * @b: The second number
 * Return: The sum of i and b
 */
int op_add(int i, int b)
{
	return (i + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @i: The first number
 * @b: The second number
 * Return: The difference of i and b
 */
int op_sub(int i, int b)
{
	return (i - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @i: The first number
 * @b: The second number
 * Return: The product of i and b
 */
int op_mul(int i, int b)
{
	return (i * b);
}

/**
 * op_div - Returns the division of two numbers
 * @i: The first number
 * @b: The second number
 * Return: The quotient of i and b
 */
int op_div(int i, int b)
{
	return (i / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers
 * @i: The first number
 * @b: The second number
 * Return: The remainder of the division of i by b
 */
int op_mod(int i, int b)
{
	return (i % b);
}
