#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);

int _sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
		return -1;

	mid = (start + end) / 2;

	if (mid * mid == n)
		return mid;
	else if (mid * mid > n)
		return _sqrt_helper(n, start, mid - 1);
	else
		return _sqrt_helper(n, mid + 1, end);
}
int prime_helper(int n, int i)
{
	if (n <= 2)
		return (n == 2) ? 1 : 0;
	if (n % i == 0)
		return 0;
	if (i * i > n)
		return 1;
	return (prime_helper(n, i + 1));
}
char *palindrome_helper(char *s)
{
	char rev[50];
	int i = 0;

	if (*s != '\0')
	{
		palindrome_helper(s + 1);
		rev[i] = (*s);
		i++;
	}
	strcpy(s, rev);
	return (s);
}
#endif /* MAIN_H */
