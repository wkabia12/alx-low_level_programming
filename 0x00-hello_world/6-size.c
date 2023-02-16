# include <stdio.h>
/**
 * main - List out the size of diffrent datatypes
 *Return: 0
 */
int main(void)
{
	unsigned long schar = sizeof(char);
	unsigned long sint = sizeof(int);
	unsigned long sfloat = sizeof(float);
	unsigned long slint = sizeof(long);
	unsigned long sllint = sizeof(long long);

	printf("Size of a char: %lu byte(s)\n", schar);
	printf("Size of an int: %lu byte(s)\n", sint);
	printf("Size of a long int: %lu byte(s)\n", slint);
	printf("Size of a long long int: %lu byte(s)\n", sllint);
	printf("Size of a float: %lu byte(s)\n", sfloat);
	return (0);
}
