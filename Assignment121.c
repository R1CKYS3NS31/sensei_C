#include <stdio.h>
#include <string.h>

char Device[3]={'A','B','C'};
int power[3];
int power_OFF=1200;  
float cost[3];
void charges();
int main(){
    
    

    /*prompt the user*/
    printf("\tPOWER CONSUMPTION OF DEVICES AT SARAH'S HOUSE\t\n\n");
    int a;
    for(a=0;a<3;a++){
        printf("Enter power consumption of Device %c : ",Device[a]);
        scanf("%d",&power[a]);

    }
    /*time before shutdown*/
    int t;
      
    
    float total_time;
    t=0;
    while(t<3){
        float time=(power_OFF/power[t])/60.0;
        printf("Device %c takes %f HOURS to shutdown\n",Device[t],time);
        t++;
        total_time+=time;
    }
    printf("\nTime taken for all devices to shutdown when switched ON at the same time: %f HOURS\n",total_time);

    charges();
    

    return 0;

}
/*charges*/
void charges(){
    float cost;
    int m=0;
    while(m<3){
        if((power_OFF/power[m])<=30){
            float cost_30=(power_OFF/power[m])*60*10;
            printf("\nDevice %c consumed power for less than 30 mins and it's total charges are : sh %f\n",Device[m],cost_30);
            ///cost+=cost_30;
        }
        if((power_OFF/power[m])>30){
            float cost_d=(((power_OFF/power[m])-(30))*60*5+(30*10));
            printf("\nDevice %c consumed power for more than 30 mins and it's total charges are : %f\n",Device[m],cost_d);
            ///cost+=cost_d;
        }

        ///printf("The total cost of Device %c is : %f\n",Device[m],cost);
        m++;
        ///int total_allcost;
        ///total_allcost=total_allcost+cost;
    }
    ///printf("The total cost of all Devices is : %d",total_allcost);
    /*ricky has bugs-i don't have total cost*/
}