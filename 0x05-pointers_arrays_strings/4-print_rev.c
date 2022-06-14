#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * Return : void
 */

void print_rev(char *s)
{
int c = 0;

while (*s != '\0')
{
c++;
s++;
}
while (c >= 0)
{
_putchar(*s)
s--;
c--;
}
_putchar('\n');
}
