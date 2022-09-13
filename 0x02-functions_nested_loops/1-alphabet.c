#include"main.h"
/**
 * print_alphabet - prints lowercase alphabets in order
 */
void print_alphabet(void)
{
	int start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}

	_putchar('\n');
}
