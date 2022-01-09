#include <stdio.h>
int add(int a,int b);

int main(){
    int x,y,sum;
    printf("Enter the first value: ");
    scanf("%d",&x);
    printf("Enter the second value: ");
    scanf("%d",&y);
    sum=add(x,y);///calling function and assigning it to sum
    printf("\nThe sum of first and second value is = %d\n",sum);
    return 0;
}int add(int a,int b){
    int c;
    c=a+b;
}