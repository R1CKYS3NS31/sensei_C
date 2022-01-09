#include <stdio.h>
void main(){
    int a[3][2],i,j;
    printf("Enter the values of the matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);

    }
    printf("The matrix is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;

}//ricky has bugs