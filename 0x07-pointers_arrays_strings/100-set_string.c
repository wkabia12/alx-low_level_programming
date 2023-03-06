#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: string to set
 * @to: string to be replaced
 */
void set_string(char **s, char *to)
{
	*s = to;
}
