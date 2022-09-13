#include"main.h"
#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 ( SUCCESS )
 */

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
	{
		printf("%d\n", c);
		if (_isalpha(c))
			break;
	}

	return (0);
}
