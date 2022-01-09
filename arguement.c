#include <stdio.h>
#include <stdarg.h>

double average(int num,...){
    va_list valist;
    int i;
    double sum;

    va_start(valist,num);
    for(i=0;i<num;i++){
        sum+=va_arg(valist,int);

    }
    va_end(valist);
    return sum/num;
}
int main(){
    printf("The average of 77,98,56,83 is: %f\n",average(4,77,98,56,83));
    printf("The average of 5,10,15 is: %f\n",average(3,5,10,15));

}