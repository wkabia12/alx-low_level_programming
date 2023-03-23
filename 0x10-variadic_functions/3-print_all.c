#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of type of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int len = 0, index = 0, print = 1;

	va_start(args, format);
	while (format[len] != '\0')
		len++;
	while (index < len)
	{
		print = 1;
		switch (format[index])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
			default:
				print = 0;
				break;
		}
		if (index != len - 1 && print != 0)
			printf(", ");
		index++;
	}
	va_end(args);
	printf("\n");
}
