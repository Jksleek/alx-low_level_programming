#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0(Success)
 */
int main(void)

{
char l;
char j;
l = 'a';
j = 'A';
while (l <= 'z')
{
putchar(l);
l++;

}
while (j <= 'z')
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
