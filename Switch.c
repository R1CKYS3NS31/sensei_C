#include <stdio.h>
int main(){
    int day=7;
    switch(day){
        case 1:
        printf("Today is monday\n");
        break;
        case 2:
        printf("Today is Tuesday\n");
        break;
        case 3:
        printf("Today is Wednesday\n");
        break;
        case 4:
        printf("Today is Thursday\n");
        break;
        case 5:
        printf("Today is Friday\n");
        break;
        case 6:
        printf("Today is Saturday\n");
        break;
        default:
        printf("Today is Sunday\n");
    }
}