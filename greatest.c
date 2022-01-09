#include <stdio.h>
int main(){
    printf("To find which one is the greatest value\n\n");
    int a,b,c;

    printf("Enter the first  value:");
    scanf("%d",&a);
    printf("Enter the second value:");
    scanf("%d",&b);
    printf("Enter the third value:");
    scanf("%d",&c);

    if(a>b&&a>b){
        printf("a is the Greatest value: %d\n",a);
    }else if(b>a&&a>b){
        printf("b is the Greatest value: %d\n",b);
    }else if(c>b&&c>a){
        printf("c is the Greatest value: %d\n",c);
    }else if(a==b==c){
        printf("a,b and c are equal\n");
    }else if(a==b){
        printf("a and b are equal\n");
    }else if(a==c){
        printf("a and c are equal\n");
    }else if(b==c){
        printf("b and c are equal\n");
    }
    return 0;

}