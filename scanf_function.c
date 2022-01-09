#include <stdio.h>
void add(int a,int b){
    int sum;
    sum=a+b;
    printf("The sum of the numbers you entered is = %d",sum);

}
int main(){
    int x,y;
    printf("Enter the first number: \n");
    scanf("%d",&x);
    printf("Enter the second number: \n");
    scanf("%d",&y);

    add(x,y);
    printf("\n\n");

}