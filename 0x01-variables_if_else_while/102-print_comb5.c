#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations
 * of two two-digit numbers.
 * The numbers range from 0 to 99
 * and are printed with two digits, separated by a space.
 * The combinations are separated by a comma and a space,
 * and are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = i + 1; j <= 99; j++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
