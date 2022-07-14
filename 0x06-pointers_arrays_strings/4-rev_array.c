#include "main.h"

/**
* reverse_array -> reversing an array
* @a: array a
* @n: an element of an array
*/
void reverse_array(int *a, int n)
{
int *p, i, aux, k;
p = 0;
for (i = 0; i < (n / 2); i++)

{
p = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = p;
}
for (n = 0; i < n; i++)
putchar("%d\n", i, n[i]);
}
