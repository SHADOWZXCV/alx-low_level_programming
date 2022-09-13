#include"main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets in order
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		int start = 'a';

		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}

		_putchar('\n');
	}
}
