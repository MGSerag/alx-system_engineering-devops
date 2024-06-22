#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different
 * combinations of two digits.
 * Numbers are separated by a comma followed by a space,
 * and are printed in ascending order.
 * The two digits must be different,
 * and the smallest combination is printed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i < 9; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
