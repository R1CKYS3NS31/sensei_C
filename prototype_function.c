#include <stdio.h>

void prototypefunc();
int main(){
    prototypefunc();

    printf("\n\n");
    return 0;
}
void prototypefunc(){
    printf("This is a prototyped function\n");
}