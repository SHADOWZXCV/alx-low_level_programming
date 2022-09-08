#include<stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\"";
	char str2[] = " - Dora Korpar, 2015-10-19\n";

	fwrite(str1, 1, sizeof(str1), stderr);
	fwrite(str2, 1, sizeof(str2), stderr);

	return (1);
}
