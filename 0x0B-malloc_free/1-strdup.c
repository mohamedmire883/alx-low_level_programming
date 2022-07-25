#include "main.h"

/**
 * _strdup -> strig duplicator function
 * @str: string to be duplicated
 * Return: a tring pointer
 */
char *_strdup(char *str)
{

int i = 1, j = 0;
char *s;
if (str == NULL)
return (NULL);

while (str[i])
i++;
s = (char *)malloc(i *sizeof(char) + 1);
if (s == Null)
return (NULL);
while (j < i)
{
s[j] = str[j];
j++;
}
s[j] = '\0';

return (s);
}
