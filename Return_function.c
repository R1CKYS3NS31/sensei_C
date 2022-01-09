#include <stdio.h>
int product(int a,int b){
    return a*b;
}
int main(){
    int x,y;
    printf("Enter the first number : ");
    scanf("%d",&x);
    printf("Enter the second number :");
    scanf("%d",&y);

    int prod=product(x,y);
    printf("The product of the numbers you enter is = %d",prod);

    printf("\n\n");

}