#include "main.h"

/**
 * str_concat -> strig concatination function
 * @s1: string 1
 * @s2: string 1
 * Return: string 1 + string2;
 */
char *str_concat(char *s1, char *s2)
{

int i = 0, j = 0, l = 0, k = 0;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s1 = "";

while (s1[i])
i++;
while (s2[j])
j++;
l  = i + j;
s = (char *)malloc(l *sizeof(char) + 1);
if (s == NULL)
return (s);
j = 0;
while (k < l)
{
if (k < i)
s[k] = s1[k];
if (k > i)
{
s[k] = s1[j];
j++;
}
k++;
}
s[k] = '\0';
return (s);
}
