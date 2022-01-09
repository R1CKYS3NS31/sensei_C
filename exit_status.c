#include <stdio.h>
#include  <stdlib.h>

int main(){
    int dividend=30;
    int divisor=5;
    int quotient;

    if(divisor==0){
        fprintf(stderr,"Divisor by zero! Exiting...\n");
        exit(EXIT_FAILURE);

    }
    quotient=dividend/divisor;

    fprintf(stderr,"The quotient is : %d\n",quotient);
    exit(EXIT_SUCCESS);

}