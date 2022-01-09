#include <stdio.h>
int max(int num1,int num2);
int main(){
    int a,b,res;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    res=max(a,b);
    printf("The maximum number is : %d\n",res);

}int max(int num1,int num2){
    int result;
    if(num1>num2){
        result=num1;
    }else{
        result=num2;
    }
    return result;

}