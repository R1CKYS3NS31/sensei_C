#include <stdio.h>
int remaind(int val1,int val2);
int main(){
    int num1,num2,remainder;
    printf("\nEnter the first value: ");
    scanf("%d",&num1);

    printf("\nEnter the second value: ");
    scanf("%d",&num2);

    remainder=remaind(num1,num2);
   
    printf("\nThe remainder is: %d\n",remainder);

    return 0;

}
int remaind(int val1,int val2){
    int rem;
    if(val2==0){
        printf("\nThe second value should not be zero\n");
    }
    rem=val1%val2;
    return rem;
}