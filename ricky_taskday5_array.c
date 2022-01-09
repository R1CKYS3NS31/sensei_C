#include <stdio.h>
#define A_SIZE(A) sizeof(A)/sizeof(A[0])
void print_array(int a[],int count);
void copy_array(int to[],int from[],int count);

int main(void){
    int orig[6] = { 17, 27, 37, 47, 57, 67 };
    int copy[6] = { -1, -1, -1, -1, -1, -1 };

    copy_array(copy, orig, A_SIZE(copy));
    printf("The copy contains the following values\n");
    print_array(copy, A_SIZE(copy));
    return 0;
}
/* This function is as before*/
void print_array(int a[], int count){
    int i;
    for(i = 0; i < count; i++){
        printf("%i\t", a[i]);
        printf("\n");
        }
}
void copy_array(int to[], int from[], int count){
    int i;
    for(i = 0; i < count; i++){
        to[i] = from[i];
    }

}