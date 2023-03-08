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

  int _sqrt_helper(int n, int start, int end)
  {
      int mid;

      if (start > end) {
          return -1;
      }

      mid = (start + end) / 2;
 
      if (mid * mid == n) {
          return mid;
      } else if (mid * mid > n) {
          return _sqrt_helper(n, start, mid - 1);
      } else {
          return _sqrt_helper(n, mid + 1, end);
      }
 }
#endif /* MAIN_H */
