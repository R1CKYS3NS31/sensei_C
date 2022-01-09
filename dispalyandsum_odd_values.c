#include <stdio.h>
int main(){
    
    int sum;
    printf("odd numbers from 1 to 100 are :\n");
    
    for(int d=1;d<=100;d++){
        if(d%2==1){
            printf(" %d\t",d);
            sum+=d;
        }     
    }
    printf("The sum of the odd values is: %d \n",sum);
   
    return 0;

}