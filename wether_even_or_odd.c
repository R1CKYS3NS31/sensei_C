#include <stdio.h>
int main(){
    int a,b;
    printf("Enter any number : ");
    scanf("%d",&a);
    b=a%2;
    if(b==0){
        printf("The number you entered is an even number\n",b);
    }else if(b==1){
        printf("The number you entered is an odd number\n",b);
    
    }
    return 0;


}