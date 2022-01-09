#include <stdio.h>
int main(){
    int numberarray[2][3]={
        {5,6,7},///row 0
        {8,9,0}///row 1   
    };
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Elements of position[%d][%d]= %d\n",i,j,numberarray[i][j]);

        }
    }
}