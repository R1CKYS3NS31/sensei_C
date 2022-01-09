#include <stdio.h>
#include <stdlib.h>

int main (){
    int dividend=20;
    int divisor=0; 
    int quotient;

    if(divisor==0){
        fprintf(stderr,"Divisor by zero! exiting...\n");
        exit(-1);
    }
    quotient=dividend/divisor;

    fprintf(stderr,"The quotient is : %d\n",quotient);
    exit(0);
}