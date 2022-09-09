#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int start = '0';

	while (start <= '9')
	{
		putchar(start);
		start++;
	}

	putchar('\n');

	return (0);
}
