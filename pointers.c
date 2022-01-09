#include <stdio.h>
int main(){
    int var=20;
    int *ip;
    ip=&var;

    printf("The address of var is : %x\n",&var);

    printf("The address of ip is : %x \n",ip);
    
    printf("The value of the var is : %d\n",var);
    printf("The value of the ip pointer(*ip) is : %d\n",*ip);
    

    return 0;
    
}