#include "main.h"
#include <string.h>

/**
* _strncpy -> for copyying purpose
* @dest: first param
* @src: second param
* @n: 3rd param
* Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
strncat(dest, src,  n);

return (dest);
}
