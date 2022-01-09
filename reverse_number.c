#include <stdio.h>
int main(){
    int a,n,r;
    printf("Enter any number to get it's reverse: ");
    scanf("%d",&n);
    while(n>=1){
        a=n%10;
        r=(r*10)+a;
        n=n/10;

    }
        
    printf("The reverse of the number is : %d",r);
    printf("\n\n");

    return 0;
}