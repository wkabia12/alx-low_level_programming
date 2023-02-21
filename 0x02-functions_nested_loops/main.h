void print_alphabet(void);
void print_alphabetx10(void);


#include "_putchar.c"

void print_alphabet(void)
{
	int i = 'a';

	for (i = 'a'; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

void print_alphabetx10(void)
{
	int i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
