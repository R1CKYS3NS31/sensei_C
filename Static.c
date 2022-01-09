#include <stdio.h>
void func(void);
static int count=10;
int main(){
    while(count--){
    func();
    }
    return 0;

}void func(void){
    static int i=10;
    i++;
    printf("i is %d when count is %d and total is 20\n",i,count);

}