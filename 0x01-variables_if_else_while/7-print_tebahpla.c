#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int start = 'z';

	while (start >= 'a')
	{
		putchar(start);
		start--;
	}

	putchar('\n');

	return (0);
}
