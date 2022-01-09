#include <stdio.h>
int main(){
    int d;
    int sum=0;
   
    for(d=1;d<=10;d++){
        if(d%2==0){
            sum+=d;
            
        }

    }
    printf("The sum of even numbers from 1 to 10 are : %d\n",sum);
    
    return 0;

}