#include <stdio.h>
const float pie=3.14;//constant pie

int main(){
    int radius,area,circum;
    printf("\nEnter the radius of the circle: ");
    scanf("%d",&radius);//read the radius

    circum=2*pie*radius;//calculate circumference
    printf("\nThe circumference of the circle is: %d",circum);

    area=pie*radius*radius;//calculate area
    printf("\nThe area of the circle is: %d\n",area);

    return 0;    
}