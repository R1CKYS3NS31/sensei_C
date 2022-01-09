#include <stdio.h>
#define rowmax 10
#define colmax 10
int main(){
    int row,column,m;
    printf("MULTIPLICATION TABLE\n");
    printf("-----------------------------------------------\n");
    row=1;
    do{
        column=1;
        do{
            m=row*column;
            printf("%d\t",m);
            column=column+1;
        }
        while(column<=colmax);
            printf("\n");
            row=row+1;        
    }
    while(row<=rowmax);

    printf("\n\n");
    return 0;

}