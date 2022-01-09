#include <stdio.h>
void cubebyreference(int *nptr);
int main(){
    int number =5;

    printf("The original value is: %d",number);
    cubebyreference(&number);
    printf("\nThe value of number is %d\n",number);
    return 0;

}
void cubebyreference(int *nptr){
    *nptr= *nptr* *nptr* *nptr;
}