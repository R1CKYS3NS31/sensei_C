#include <stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        for(j=3;j>=i;j--)
        printf(" ");
        {
            for(k=1;k<=i*2-1;k++)
            printf("A");
        }
        printf("\n");
    }
    return 0;
}
/*ricky has bugs*/