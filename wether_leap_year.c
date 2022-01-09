#include <stdio.h>
int main(){
    int y;
    printf("Enter any year: ");
    scanf("%d",&y);
    if(y%4==0&&y%100!=0||y%400==0){
        printf("Year you entered is a leap year\n",y);

    }else{
        printf("Year you entered is not a leap year\n",y);
    }
    return 0;

}