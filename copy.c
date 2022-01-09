#include <stdio.h>
int main(){
	int power_A,power_B,power_C,power_OFF;
	double time_A,time_B,time_C,average_time;
	power_OFF=1200;
	int a,b,c,cost_A,cost_B,cost_C,total_cost;
	/*Device A*/
    printf("\n\nMANAGEMENT OF CONSUMPTION OF THREE DEVICES RUNNING AT SARAH'S PLACE:\n");
	printf("\n\n\tDEVICE A\t");

    /*prompt user for consumption of Device A*/
	printf("\nEnter consumption of Device A:\t");
	scanf("%d.",&power_A);

	/*calculate time of consumption*/
	if(power_A<=1200){
		printf("\nThe power consumption of Device A : %d watt per min \n",power_A);
		time_A=(power_OFF/power_A)/60.0;
		printf("\nDevice A will take %lf HOURS before shutdown\n",time_A);
		}else{
			power_A=1200;
			printf("\nThe power consumption of Device A : %d watt per min \n",power_A);
			time_A=(power_OFF/power_A)/60.0;
			printf("\nDevice A is switched OFF\n");
			printf("nDevice A took %lf HOURS before shutdown\n",time_A);
	}
    /*pricing*/
	a=time_A*60;
	if(a<=30){
		printf("\nThe cost of Device A upto 30 mins :Sh. %d \n",(a*60*10));
		}else if(a>30);{
			printf("\nThe cost of Device A of after 30 min:Sh. %d \n",(a*60*5));
			}
			cost_A=((a*60*10)+(a*60*5));
			printf("\nThe total cost of Device A:Sh. %d \n",cost_A);
	
	/*Device B*/    
	printf("\n\n\tDEVICE B\t");

    /*prompt user for consumption of Device B*/
	printf("\nEnter consumption of Device B:\t");
	scanf("%d",&power_B);

	/*calculate time of consumption*/
	if(power_B<=1200.0){		
		printf("\nThe power consumption of Device B : %d watt per min \n",power_B);
		time_B=(power_OFF/power_B)/60.0;
		printf("\nDevice B will take %lf HOURS before shutdown\n",time_B);
		}else{
			power_B=1200;
			printf("\nThe power consumption of Device B : %d watt per min \n",power_B);
			time_B=(power_OFF/power_B)/60.0;
			printf("\nDevice B is switched OFF\n");
			printf("\nDevice B took %lf HOURS before shutdown \n",time_B);	
		
	}
    /*pricing*/
	b=time_B*60;
	if(b<=30){
		printf("\nThe cost of Device B upto 30 mins :Sh. %d \n",(b*60*10));
		}else if(b>30);{
			printf("\nThe cost of Device B of after 30 min:Sh. %d \n",(b*60*5));
			}
			cost_B=((b*60*10)+(b*60*5));
			printf("\nThe total cost of Device B:Sh. %d \n",cost_B);
	
	/*Device C*/
	printf("\n\n\tDEVICE C\t");

    /*prompt user for consumption of Device B*/
	printf("\nEnter consumption of Device C:\t");
	scanf("%d",&power_C);

	/*calculate time of consumption*/
	if(power_C<=1200){
		printf("\nThe power consumption of Device C : %d watt per min \n",power_C);
		time_C=(power_OFF/power_C)/60.0;
		printf("\nDevice C will take %lf HOURS before shutdown\n",time_C);
	}else{
		power_C=1200;
		printf("\nThe power consumption of Device C : %d watt per min \n",power_C);
		time_C=(power_OFF/power_C)/60.0;
		printf("\nDevice C is switched OFF\n");
		printf("\nDevice C took %lf HOURS before shutdown\n",time_C);
		}

    /*pricing*/
	c=time_C*60;
	if(c<=30){
		printf("\nThe cost of Device C upto 30 mins :Sh. %d \n",(c*60*10));
		}else if(c>30);{
			printf("\nThe cost of Device C of after 30 min:Sh. %d \n",(c*60*5));
			}
			cost_C=((c*60*10)+(c*60*5));
			printf("\nThe total cost of Device C:Sh. %d \n",cost_C);

			total_cost=cost_A+cost_B+cost_C;
			printf("\n\nTotal amount of all devices A,B and C is :Sh. %d \n",total_cost);


	/*if all devices were switched at the same time*/

    average_time=(time_A+time_B+time_C)/3;
    printf("if the devices were switched ON at same time,they will switch OFF after %f HOURS of power consumption \n\n",average_time);
	
	return 0;		
	
}