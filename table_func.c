#include <stdio.h>
void table(){
    int n,r;
    printf("The the number you want to get it's table upto it: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        r=n*i;
        printf("%d*%d=%d\n",n,i,r);
    }
}
int main(){
    table();
    printf("\n\n");
    return 0;

}