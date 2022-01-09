#include <stdio.h>
int main(){
    int y=5;
    int *yptr;
    yptr=&y;
    //printf("y is: %d \n",y); or
    printf("y is: %d \n",*yptr);
    printf("address of y: %d\n",yptr);
    printf("address of y again: %d \n",*&yptr);

    printf("%d \n",y);
}