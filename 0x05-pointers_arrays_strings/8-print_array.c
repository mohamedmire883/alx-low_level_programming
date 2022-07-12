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
int i[6];

for (n = 0; n < 10; n++)
{
printf("%d ,", i[n]);
n = *a;
for (n = 0; n < 10; n++)
{	
printf("\n%d ,", *a);
a++;
}
}
}
