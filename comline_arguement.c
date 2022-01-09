#include <stdio.h>
int main(int argc,char *agrv[]){
    if(argc==2){
        printf("The argument supplied is: %s",agrv[4]);

    }else if(argc>2){
        printf("Too many arguments");

    }else{
        printf("One argument required");

    }
    return 0;
}