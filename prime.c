#include <stdio.h>
#include <ctype.h>
int main(){
    int n,p;
    printf("Enter any number to know whether it is a prime number or not: ");
    scanf("%c",&n);

    printf("\ninput: %c\n",n);
    if(isdigit(n)){
        printf("input is a number\n");

        for(int i=2;i<=n-1;i++){
            if(n%i==0){
                p=1;
            } 
            break;
        }
        if(p==0){
            printf("It is a prime number");
        }
        else{
            printf("It is not a prime number");
        }
    }else{
        printf("invalid input please enter a number");
    }

    printf("\n\n");
    return 0;
}
// ricky has bugs