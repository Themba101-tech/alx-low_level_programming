#include "main.h"

/**
 * puts2 - function
 * @str: string operand
 * Description: print every other char of a string starting with 1stw/ \n
 * Return: void
 */

void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
str++;
}
_putchar('\n');
}
