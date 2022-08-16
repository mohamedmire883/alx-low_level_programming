#include <stdio.h>
/*
*Read in Three floats and print sum sally coder
*August, 03, 2022
*/

int main(void)
{
float a, b, c, sum;
printf("input the three values");
scanf("%f%f%f", &a, &b, &c);
printf("a = %f, b = %f, c = %f\n", a, b, c);
sum = a + b + c;
printf("sum = %f\n\n", sum);
return (0);
}
