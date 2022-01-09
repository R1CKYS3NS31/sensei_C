#include <stdio.h>
#include <string.h>

union Data{
    int i;
    float f;
    char  str[20];
    
};
int main(){
    union Data data;
    printf("The memory size occupied by the union is = %d \n",sizeof(data));
    return 0;

}