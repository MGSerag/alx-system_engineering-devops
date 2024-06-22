#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* stupid func */
int main(void)
{

/**
 * Function that generates random number
 * and checks if number is positive, negative
 * or zero
 */


int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
/* return 0 */
return (0);
}
