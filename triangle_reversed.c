#include <stdio.h>
int main(){
    int i,j,k;

    for(i=1;i<=15;i++){
        for(j=15;j>=i;j--)
        printf("#");
        for(k=1;k<=i;k++)
        printf("*");
        printf("\n");

    }
    return 0;

}