#include <stdio.h>
int div(int val1,int val2){
    int rem;
    if(val2==0){
        printf("\nThe second value should not be zero\n");
    }
    rem=val1%val2;//calculates the remainder
    return rem;//return the remainder
}
int main(){
    int num1,num2,remainder;
    printf("\nEnter the first value: ");
    scanf("%d",&num1);//read first value

    printf("\nEnter the second value: ");
    scanf("%d",&num2);//read second value

    remainder=div(num1,num2);//call the function
    printf("\nThe remainder is: %d\n",remainder);//display remainder

    return 0;

}