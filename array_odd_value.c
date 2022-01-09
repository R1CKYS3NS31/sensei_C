#include<stdio.h>
int main(){
    int n;
    int y[]={13,56,77,23,58,0};
    printf("This are odd values from the array : ");
    for(n=0;n<5;n++){
        if(y[n]%2==1){
            printf("%d\t ",y[n]);
            
        } 
    }
    printf("\nAnd the following are even values from the array : ");
    int m;
    for(m=0;m<5;m++){
        if(y[m]%2==0){
            printf("%d\t",y[m]);
        }
    }
    printf("\n");
    return 0;
}