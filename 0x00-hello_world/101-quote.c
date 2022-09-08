#include<stdio.h>
#include <unistd.h>

/**
 * main - Entry point of program
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

write(2, str, sizeof(str));
write(2, "\n", sizeof(char));

return (1);
}
