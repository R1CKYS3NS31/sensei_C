#include<stdio.h>

int main(){
    int no;
    printf("Enter a number between 1 and 3: ");
    scanf("%d",&no);
    switch(no){
        case 1:
        printf("\nThat is no. 1\n");
        break;
        case 2:
        printf("\nThat is no. 2\n");
        break;
        case 3:
        printf("\nThat is no. 3\n");
        break;

        default:
        printf("\n%d is invalid no.\n",no);
    }
    return 0;
}