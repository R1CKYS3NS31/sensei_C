#include <stdio.h>
int main(){
    int x,y;
    printf("Enter any integer : ");
    scanf("%d",&x);

    x<<=1;
    y=x;
    
    printf("%d when shifted left\n",y);

    printf("\n");

    return 0;
}