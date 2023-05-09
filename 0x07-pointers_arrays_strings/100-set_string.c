#include "main.h"

/**
 * set_string -Prints a function that sets the value of a pointer to a char
 * @s: Pointer to pointer
 * @to: Pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
