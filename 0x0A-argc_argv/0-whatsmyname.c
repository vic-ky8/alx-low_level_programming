#include "main.h"
#include <stdio.h>
/**
 * main - A function that prints the name of the program
 * @argc: Number of arguments
 * @argv: array of arguments
 * Returns: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
