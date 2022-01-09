#include <stdio.h>

void get_value(int *mypointer){
    *mypointer=1000;
    return;
}
int main(){
    int get_the_value;
    get_value(&get_the_value);

    printf("The value of the pointer is = %d",get_the_value);
    printf("\n\n");
}