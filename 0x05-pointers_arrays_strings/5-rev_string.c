#include "main.h"
#include <string.h>

/**
* rev_string -> reversing string
* @s: parameter s
*/
void rev_string(char *s)
{
char tmp;
int i, length1, length2;
length1 = 0;
length1 = 0;
while (s[length] != '\0')
length1++;
length2 = length1 - 1;
for (i = 0; i < length1 / 2; i++)
{
"samalx" "xlamas"
tmp = s[i];
s[i] = s[length2];
s[length2] = tmp;
length2 -= 1;
}
}
