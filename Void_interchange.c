#include <stdio.h>
void interchange(int *a,int *b);
int main(){
    int x=45,y=56;
    printf("x and y before interchange) were : %d and %d \n",x,y);
    interchange(&x,&y);
    printf("Now after interchange they are %d and %d \n",x,y);
    
    return 0;
}void interchange(int *a,int *b){
    int i;
    i=*a;
    *a=*b;
    *b=i;
}