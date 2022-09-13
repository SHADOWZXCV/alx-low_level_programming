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
		if(_islower(c))
			break;
	}

	return (0);
}
