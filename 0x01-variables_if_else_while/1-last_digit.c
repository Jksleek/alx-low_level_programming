#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * code description
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int m;

srand(time(0));
n = rand() - RAND_MAX / 2

/* your code goes there */
m = n % 10;
if (m > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, m);
}
else if (m == 0)
{
printf("Last  digit of %i is %i and is 0\n", n, m);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\", n, m);
}
return (0);
}
