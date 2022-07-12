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
int size = 6;
a[size] = *{4, 2, 3, 7, 8, 9};
for (n = 0; n < size; n++)
{
printf("%d ,", n);
}
printf("\n");
}
