#include<stdio.h>
void pricing();
double cut=1200.0;
int devices[3];
char names[3]={'A','B','C'};
double totaltime=0;
int main(){
	
    int b=0;
    while (b<3){

    	printf("Enter the power consumption DEVICE %c:",names[b]);
        scanf("%d",&devices[b]);
        printf("%f hours before DEVICE %c shutdown\n\n",(cut/devices[b])/60.0,names[b]);
        totaltime=totaltime+(cut/devices[b])/60.0;
        b++;
    }
    printf("TOTAL TIME BEFORE ALL DEVICES SWITCH OFF:%f HRS\n\n",totaltime);
    pricing();
	return 0;
}
/*pricing*/
void pricing(){
	int i;

	double totalcost=0.0;
	
	for(i=0;i<3;i++){
		if((cut/devices[i])<=30){
			printf("Device %c cost:SH %f\n",names[i],((cut/devices[i])*10));
			totalcost=totalcost+((cut/devices[i])*10);
		}
		if((cut/devices[i])>30){
			printf("Device %c cost: %f\n",names[i],((cut/devices[i])-30)*5+(300));
			totalcost=totalcost+((cut/devices[i])-30)*5+(300);
		}
	}
	printf("TOTAL COST: SH %f",totalcost);
}
