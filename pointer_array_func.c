#include <stdio.h>
int getsum(int *pointer_array,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=pointer_array[i];
        
    }
    return sum;
}
int main(){
    int new_array[2]={45,89};
    int mysum=getsum(new_array,2);

    printf("The sum of the pointer array using function is: %d\n",mysum);

    printf("\n\n");

}