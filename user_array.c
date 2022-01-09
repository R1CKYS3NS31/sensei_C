#include <stdio.h>
int main(){
    int x[5];
    int d;
    int sum;
    for(d=1;d<=5;d++){
        printf("Enter the value of index %d :",d);
        scanf("%d",&x[d]);
        
        sum+=x[d];
        printf("value of %d is %d\n",d,x[d]);

    }
   
    printf("\nTheir sum is: %d\n",sum);

    return 0;

}