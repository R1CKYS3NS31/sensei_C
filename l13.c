#include <stdio.h>
#include <stdlib.h>

int main() {
	char device;
double power_consumption,cost_A,cost_B,cost_C,total_cost; 
int time_seconds,time_minute,time_hours;

   
     printf("Enter a device (A,B,C):");
    scanf("%c", &device);
    printf("Enter its power consumptionin(watts per minute):");
    scanf("%lf",&power_consumption);    
    
    switch(device)
    {
        case 'A':
        	printf("Enter the time(in minutes) consumed by device A when running:");
	          scanf("%d",&time_minute);
	time_minute=time_minute+1;
	time_seconds=time_minute*60;
	time_hours=(time_minute/60);
	if(time_minute<30)
	cost_A=10*time_seconds;
	else
	cost_A=5*time_seconds;
	printf("Device A used power worth %lf shillings\n",cost_A);
	printf("Device A has been running for %d hours\n\n",time_hours);
	
if(power_consumption>=1200)
	{
		printf("WARNING!!\n DEVICE A HAS REACHED THE POWER LIMIT!!!!\nSWITCH IT OFF\n");
	}
	else
	{
		printf("Device A has not reached the power limit\n");
		printf("KEEP RUNNING!");
		
	}
            
            break;
        case 'B':
                	printf("Enter the time(in minutes) consumed by device B when running:");
	scanf("%d",&time_minute);
	time_minute=time_minute+1;
	time_seconds=time_minute*60;
if(time_minute<30)
	cost_B=10*time_seconds;
	else
	cost_B=5*time_seconds;
	printf("Device B used power worth %lf shillings\n",cost_B);
	
	time_hours=(time_minute/60);
	printf("Device B has been running for %d hours\n\n",time_hours);
        		if(power_consumption>=1200)
	{
		printf("WARNING!!!\nDEVICE B HAS REACHED THE POWER LIMIT!!!!\nSWITCH IT OFF");
	}
	else
	{
		printf("Device B has not reached the power limit\n");
		printf("KEEP RUNNING!");
		
	}
            
            break;
        case 'C':
                 	printf("Enter the time(in minutes) consumed by device C when running:");
	scanf("%d",&time_minute);
	time_minute=time_minute+1;
	time_seconds=time_minute*60;
if(time_minute<30)
	cost_C=10*time_seconds;
	else
	cost_C=5*time_seconds;
	printf("Device C used power worth %lf shillings\n",cost_C);
	
	time_hours=(time_minute/60);
	printf("Device C Consumed %d hours running\n",time_hours);
	
        		if(power_consumption>=1200)
	{
		printf("WARNING!!\nDEVICE C HAS REACHED THE POWER LIMIT!!!!\nSWITCH OFF");
	}
	else
	{
		printf("Device C has not reached the power limit\n");
		printf("KEEP RUNNING!");
		
	}
            
            break;
        /*if device input doesn't match any case constant (A,B,C)*/
        default:
            printf("Error! The entered device name does not exist!!!\n\nPlease re-enter the Device name");
    }
    
	return 0;
}
