#include <stdio.h>
int main(){
    char greeting[6]={'H','e','l','l','o','\0'};
    printf("The greetings message: %s \n",greeting);

    int d=0;
    while(d<6){
        printf(" %c ",greeting[d]);
        d++;
    }
    return 0;
}