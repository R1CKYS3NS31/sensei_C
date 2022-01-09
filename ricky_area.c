#include <stdio.h>
int main(void)
{
long double radius = 0.0L;
long double area = 0.0L;
const long double pi = 3.1415926353890L;



printf("please give the radius ");
scanf("%Lf", &radius);
area = pi * radius * radius;
printf("Area of circle with radius %.3Lf is %.3Lf\n", radius, area);
return 0;
}