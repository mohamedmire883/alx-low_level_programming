#include "main.h"

/**
* fizz_buzz -> printing to 100
*/
void fizz_buzz(void)
{
int x;

for (x = 1; x <= 100; x++)
{
if (x == 100)
printf("buzz ");
if (x % 3 == 0 && x % 5 == 0)
printf("fizzbuzz");
else if (x % 3 == 0)
printf("fizz ");
else if (x % 5 == 0)
printf("buzz ");
else
printf("%d ", x);
}
printf("\n");
}
