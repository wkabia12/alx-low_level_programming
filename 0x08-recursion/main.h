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
int wildcmp(char *s1, char *s2);


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

int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return 1;
	else if (s[start] != s[end])
		return 0;
	else
		return (palindrome_helper(s, start + 1, end - 1));
}
#endif /* MAIN_H */
