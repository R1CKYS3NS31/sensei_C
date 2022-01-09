#include <stdio.h>
int main(){
    int d[10];
    
    int p,r;
    for(p=0;p<10;p++){
        d[p]=p+100;
    }
    for(r=0;r<10;r++){
        printf("Element %d has %d \n",r,d[r]);

    }
    return 0;
}