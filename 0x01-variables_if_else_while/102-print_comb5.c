#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int start = '0';
	int start2 = '0';
	int start3 = '0';

	for (; start <= '9' && start2 <= '9'; start2++)
	{
		int start4 = start2 + 1;

		for (; start3 <= '9' && start4 <= '9'; start4++)
		{
			putchar(start);
			putchar(start2);
			putchar(' ');
			putchar(start3);
			putchar(start4);
			if (start == '9' && start2 == '8' && start3 == '9' && start4 == '9')
				break;

			if (start4 == '9')
			{
				start3++;
				start4 = '0' - 1;
			}

			putchar(',');
			putchar(' ');
		}

		start3 = start;
		if (start2 == '9')
		{
			start++;
			start2 = '0';
		}

	}

	putchar('\n');

	return (0);
}
