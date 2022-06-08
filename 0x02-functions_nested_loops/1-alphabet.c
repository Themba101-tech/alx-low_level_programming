#include <stdio.h>
#include <stdlib.h>

/**
 *  * print_alphabet - print alphabet lowercase followed by a new line.
 *  * Return: Always 0.
*/

void print_alphabet(void)
{
char ch;

ch = 'a';
while (ch <= 'z')
{
_putchar(ch);										ch++;
}
_putchar('\n');
return (0);
}
