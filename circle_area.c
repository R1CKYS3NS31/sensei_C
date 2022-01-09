#include <stdio.h>
const long double PI=3.1415926353890L;
int main(){
    long double radius=0.0L,area=0.0L;
    printf("Enter the radius: ");
    scanf("%Lf",&radius);
    if(radius!=0.0){
        area=PI*radius*radius;
        printf("The area of radius %.2Lf is : %.2Lf\n",radius,area);
    }else{
        printf("\nPlease enter a non-zero value!\n");
    }    
    return 0;
}