#include <stdio.h>
#include <math.h>
int main(){
    int x=81;
    float y=sqrt(x);
    float z=log(x);
    float w=tan(x);

    printf("The square root of %d is: %f\n",x,y);
    printf("The log of %d is: %f\n",x,z);
    printf("The tan of %d is: %f\n",x,w);

    return 0;

}