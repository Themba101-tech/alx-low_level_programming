#include "main.h"

/**
 * main - print_alphabet_x10
 * Description: function uses _putchar function to print
 * Return: 0. success
*/

void print_alphabet_x10(void)
{
char i;
int j;

for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}
