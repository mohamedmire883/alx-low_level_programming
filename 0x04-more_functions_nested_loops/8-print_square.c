
#include "main.h"

/**
* print_square -> printing line
* @size: intiger params
*/
void print_square(int size)
{
int x, i;

if (size <= 0)
_putchar('\n');
else
{

for (x = 0; x < size; x++)
{

for (i = 0; i < size; i++)
{
_putchar(35);
}
_putchar('\n');
}
_putchar('\n');
}
}
