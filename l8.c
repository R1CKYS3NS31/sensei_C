#include <stdio.h>

int main()
{
    int power_A,power_B,power_C,power_OFF;
    float time_A,time_B,time_C;
    
    
/*prompting user*/

    printf("\nEnter the power of A = \t");
    scanf("%d",&power_A);

    printf("\nEnter the value of B = \t");
    scanf("%d",&power_B);

    printf("\nEnter the value of C = \t");
    scanf("%d",&power_C);
    
    

/*printing*/
    
    printf("\n\nThe power consumption by A is = %dwatt ",power_A);
    time_A=(power_A/power_OFF)/60.0;

    if(power_A>=1200){
      printf("\nDevice A is switched OFF");
      }
    else{
      printf("\nDevice A is ON");
      }
      printf("\nDevice A takes %fHOURS before switching OFF \n",time_A);


    printf("\nThe power consumption by B is = %dwatt ",power_B);
    time_B=(power_B/power_OFF)/60.0;
    if(power_B>=1200){
      printf("\nDevice B is switched OFF");
      }
    else{
        printf("\nDevice B is ON");
      }
      printf("\nDevice B takes %f HOURS before switching OFF \n",time_B);


    printf("\nThe power consumption by C is = %d watt ",power_C);
    time_C=(power_OFF/power_C)/60.0;
    
    if(power_C>=1200){
      printf("\nDevice C is switched OFF");
      }
    else{
        printf("\nDevice C is ON");
      }
      printf("\nDevice C takes %f HOURS before switching OFF\n",time_C);
      return 0;
    
}