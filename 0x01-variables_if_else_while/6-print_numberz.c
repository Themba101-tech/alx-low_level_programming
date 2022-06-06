#include <stdio.h>

/**
 * * main - prints numbers 0-9 without using char or printf/puts,
 * * Return: 0 on success*
*/

int main(void)
{
int num;

for (num = 48 ; num <= 57 ; num++)
putchar(num);
putchar('\n');
return (0);
}
