#include <stdio.h>
#include <stdlib.h>

/**
 *  * print_alphabet - print alphabet lowercase followed by a new line.
 *  * Return: Always 0.
*/

void print_alphabet(void)
{
int _putchar alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
return (0);
}
