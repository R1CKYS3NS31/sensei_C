#include <stdio.h>
int product(int y,int x){
    return x*y;
}
int main(){
    int a,b,prod;
    a=6;
    b=9;
    prod=product(a,b);
    printf("The product from the function is = %d",prod);
}    