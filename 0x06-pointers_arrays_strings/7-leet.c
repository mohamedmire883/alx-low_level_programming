#include "main.h"
/**
 * leet - Entry point
 * ONE if, TWO loops only...
 * @k: input
 * Return: Always 0 (Success)
 */
char *leet(char *k)
{
int i, m;
int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int replacer[] = {'4', '3', '0', '7', '1'};

for (i = 0; k[i] != '\0'; i++)
{
for (m = 0; m <= 9; m++)
{
if (k[i] == find[m])
{
k[i] = replacer[m / 2];
m = 9;
}
}
}

return (k);
}
