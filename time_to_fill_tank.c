#include <stdio.h>

int main(){
    int time[3]={6,4};
    char tap[3]={'A','B'};
        
    int t=0;
    while(t<2){
        printf("Tap %c takes %d hours to fill the tank \n",tap[t],time[t]);
        t++;
    } 
    int tap_c=3;

    printf("And tap C take %d Hours to empty the tank\n\n",tap_c);
    float sum;
    int k;
    for(k=0;k<2;k++){
        float fract,fract_c;
        fract_c=1.0/tap_c;
        
        fract=1.0/time[k];
        printf("\nTap %c fills %f of the tank in one hour\nAnd tap C empties %f of the tank in one hour\n\n",tap[k],fract,fract_c);
        sum+=time[k];
    }
    
    printf("All tanks take %f mins to fill the tank\n",sum);


    return 0;
    ///ricky has bugs
}