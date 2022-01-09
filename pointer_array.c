#include <stdio.h>
int main(){
    int array[4]={53,67,87,44};
    int *pointer_array[4];

    for(int i=0;i<4;i++){
        pointer_array[i]=&array[i];

    }
    for(int i=0;i<4;i++){
        printf("The value of pointer array [%d]= %d\n",i,*pointer_array[i]);
    }
    printf("\n\n");
}