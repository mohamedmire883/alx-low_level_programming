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
a[6] = int{4, 2, 3, 7, 8, 9};
for (n = 0; n < 6; n++)
{
printf("%d ,", n);
}
printf("\n");
}
