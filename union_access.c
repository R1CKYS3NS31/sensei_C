#include <stdio.h>
#include <string.h>

union Data{
    int i;
    float f;
    char str[100];

};
int main(){
    union Data data;

    data.i=56;
    printf("The value of i is = %d \n",data.i);

    data.f=56.000987;
    printf("The value of is = %f \n",data.f);

    strcpy(data.str, "C programming unions");    
    printf("The string is : %s \n",data.str);

    return 0;

}