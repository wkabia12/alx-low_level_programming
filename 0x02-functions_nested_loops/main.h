int _putchar(char c);
void print_alphabet(void);


#include "_putchar.c"

void print_alphabet(void)
{
	int i = 'a';

	for (i = 'a'; i < 123; i++)
	{
		_putchar(i);
	}
}
