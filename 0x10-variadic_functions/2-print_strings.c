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
	char *str_val;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		str_val = va_arg(str, char *);

		if (str_val == NULL)
			printf("(nil)");
		else
			printf("%s", str_val);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
