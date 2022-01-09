#include <stdio.h>
int arraysum(int array[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    return sum;
};
int main(){
    int newarray[5]={45,56,73,84,34};
    int sum_array=arraysum(newarray,5);

    printf("The sum of the array is = %d",sum_array);
    printf("\n\n");
    return 0;
}