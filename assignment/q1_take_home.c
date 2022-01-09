#include <stdio.h>
const float pie=3.14;
int main(){
    double rad; //radius
    double circum;
    double area;

    printf("Enter the radius:");
    scanf("%lf",&rad);
    
    circum=2*pie*rad;
    printf("The cicumference of the circle  is: %lf\n",circum);

    area=rad*rad*pie;
    printf("The area of the circle is: %lf\n",area);
    
}