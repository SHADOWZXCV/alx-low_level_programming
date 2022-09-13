#include<stdio.h>

/**
 * main - Entry program
 *
 * Return: always 0
 */
int main(void)
{
	int i = 1, res = 0;

	for (; i < 1024; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			res += i;
		}
	}

	printf("%d\n", res);

	return (0);
}
