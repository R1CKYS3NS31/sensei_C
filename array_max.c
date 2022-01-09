#include <stdio.h>
int main() {
    int n[5],max;
    printf("Enter any five numbers :\n");
    for(int i=0;i<5;i++)
    scanf("%d",&n[i]);
    
    max=n[0];
    for(int i=0;i<5;i++){
        if(max<n[i]){
            max=n[i];
        }
        
    }
    printf("The maximum value is : %d",max);

    printf("\n\n");
    return 0;
}