#include <stdio.h>
int main(){
    int tap_A=6,tap_B=4,tap_C=3;
    float tap_AB=((1.0/tap_A)+(1.0/tap_B));
    float tap_CC=(1.0/tap_C);
    float fract=((1.0/tap_A)+(1.0/tap_B))-(1.0/tap_C);
    float time= (1.0/fract)*60;

    printf("Tap A and B fills %f of the tank in one hour\nTap C empties %f of the tank in one hour\n\nWhen all taps are open they takes %f mins to fill the tank\n",tap_AB,tap_CC,time);

    return 0;

    
}