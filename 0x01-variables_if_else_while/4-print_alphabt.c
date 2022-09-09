#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int start = '`';

	while (start < 'z')
	{
		start++;
		if (start != 'q' && start != 'e')
			putchar(start);
	}

	putchar('\n');

	return (0);
}
