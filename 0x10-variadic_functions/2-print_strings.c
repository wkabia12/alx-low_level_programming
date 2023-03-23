#include "variadic_functions.h"

/**
 * print_strings - sums all it's parameters
 * @separator: separator for the printed numbers
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char temp[500];

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		strcpy(temp, va_arg(str, char *));

		if (temp == NULL)
			strcpy(temp, "(nil)");

		if (separator != NULL && i < (n - 1))
			printf("%s%s", temp, separator);
		else
			printf("%s", temp);
	}
	va_end(str);
	printf("\n");
}
