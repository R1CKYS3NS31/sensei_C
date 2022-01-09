#include <stdio.h>
#include<string.h>

struct{
    unsigned int widthvalidated;
    unsigned int heightvalidated;
}status1;
struct{
    unsigned int widthvalidated:1;
    unsigned int heightvalidated:1;
}status2;

int main(){
    printf("The memory size occupied by unspecified status1 is : %d\n",sizeof(status1));
    printf("The memory size occupied by specified status2 is : %d\n",sizeof(status2));
    return 0;

}