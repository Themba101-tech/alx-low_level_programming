#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet letters
 * Description: function uses _putchar function to print_alphabet_x10
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
