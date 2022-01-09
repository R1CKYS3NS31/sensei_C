#include <stdio.h>
int main(){
    int val1,val2,rem;
    

    printf("Enter the first vale: ");
    scanf("%i",&val1);
    printf("Enter the second value: ");
    scanf("%i",&val2);

    rem=val1%val2;

    if(val2==0){
        printf("Please enter the second value as an integer:");
    }else{
        printf("The remainder of the values is; %i\n",rem);
    }
    

    return 0;

}