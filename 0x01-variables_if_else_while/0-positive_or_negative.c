#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable.
(* 
 * Return: 0 on success
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)	
printf("%d is positive\n", n);
else if (n < 0){	
printf("%d is negative\n", n);
else if	
printf("%d is zero\n", n);
return (0);
}
