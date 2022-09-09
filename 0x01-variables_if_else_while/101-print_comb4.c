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
			int k = j + 1;

			for (; k <= '9'; k++)
			{
				putchar(start);
				putchar(j);
				putchar(k);

				if (start != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
