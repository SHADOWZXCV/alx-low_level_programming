#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int start = '0';

	for (; start <= '9'; start++)
	{
		int j = start + 1;

		for (; j <= '9'; j++)
		{
			putchar(start);
			putchar(j);

			if (start != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
