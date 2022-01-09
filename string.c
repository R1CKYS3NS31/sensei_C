#include <stdio.h>
int main(){
    char mystring[6]={'H','e','l','l','o','\0'};
    ///or
    char my_other_string[]="Hello";

    printf("1. %s\n",mystring);
    printf("2. %s\n",my_other_string);

    printf("\n");
}