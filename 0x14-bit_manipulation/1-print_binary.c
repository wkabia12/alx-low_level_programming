#include "main.h"

/**
 * print_binary - print binary rep of decimal
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int cmplt = 1UL << (sizeof(n) * 8 - 1);
	int lead_zeros = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	while (cmplt > 0)
	{
	if (n & cmplt)
	{
		printf("1");
		lead_zeros = 0;
	}
	else if(!lead_zeros) 
		printf("0");
	cmplt >>= 1;
	}
}
