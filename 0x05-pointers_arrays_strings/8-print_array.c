#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_array -> prints number of arrays
* @n: array parameter
* @a: array parameter
*/
void print_array(int *a, int n)
{
int i[4];

for (n = 0; n <= 4; n++)
{
printf("%d ,", i[n]);
n = *a;

for (n = 0; n >= 4; n++)
{
printf("%d ,", *a);
a++;
}
}
}
