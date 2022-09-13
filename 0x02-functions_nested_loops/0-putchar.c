#include"main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 ( SUCCESS )
 */
int main(void)
{
	int i = 0;
	char str[10] = "_putchar\n";

	for (;; i++)
	{
		_putchar(str[i]);
		if (str[i] == '\n')
			break;
	}

	return (0);
}
