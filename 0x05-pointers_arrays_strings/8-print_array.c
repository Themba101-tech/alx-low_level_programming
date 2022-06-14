#include "main.h"
#include <stdio.h>

/**
 * print_array - function
 * @a: operand
 * @n: operand
 * Description: prints n elements of an array of integers w/ \n
 * Return: void
 */

void print_array(int *a, int n)
{
int i;
n = 5;
for (i = 0 ; i < n - 1 ; i++)
{
printf("%d, ", a[i]);
}
printf("%d", a[n - 1]);
printf("\n");
}
