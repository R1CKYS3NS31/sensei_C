#include <stdio.h>
int main(){
    int n,fact=1;
    printf("Enter any number to get it's factorial: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i++){
        fact*=i;
    }
    printf("The factorial is : %d",fact);

    printf("\n\n");
    return 0;
    //ricky has  bugs

}