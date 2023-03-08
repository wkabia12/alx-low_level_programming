#include "main.h"
#include <math.h>

/**
 * is_prime_number - returns 1 if prime, 0 otherwise
 * @n:number to test if prime number
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
