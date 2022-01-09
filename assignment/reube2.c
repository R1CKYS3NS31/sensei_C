#include <stdio.h>
const float pie=3.14;

int main(){
    int rad,area,circum;
    printf("\nEnter the radius of the circle: ");
    scanf("%d",&rad);//read radius

    circum=2*pie*rad;//calculate circumference
    printf("\nThe circumference of the circle is: %d",circum);

    area=pie*rad*rad;
    printf("\nThe area of the circle is: %d\n",area);

    return 0;    
}