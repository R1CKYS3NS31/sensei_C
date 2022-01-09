#include <stdio.h>
double factorial(unsigned int i){
    if(i<=1){
        return 1;
    }
    return 1*factorial(i-1);
}
int main(){
    int i=15;
    int fact=factorial(i);

    printf("The factorial for %d is: %d\n",i,fact);

    return 0;
}