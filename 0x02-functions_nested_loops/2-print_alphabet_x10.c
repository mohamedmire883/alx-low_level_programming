#include "main.h"
/**
* print_alphabet_x10 -> prints the lowercase alphabets
*/
void print_alphabet_x10(void)
{
int j;
nt x;

for (x = 0; x < 10; x++)
{
for (j = 'a'; x <= 'z'; j++)
{
_putchar(j);
}
}

_putchar('\n');
}
