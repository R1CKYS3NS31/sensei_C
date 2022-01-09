#include <stdio.h>
int main()
{
int a,b,c,name,total,average;
for(a<=100;b<=100;c<=100);


printf("Plese enter your name\t");
scanf("%s",&name);


printf("Enter your score of first subject = \t");
scanf("%d",&a);

printf("Enter your score of second subject = \t");
scanf("%d",&b);

printf("Enter your score of third subject = \t");
scanf("%d",&c);

total=a+b+c;
average=total/3;

printf("\t%s \n",&name);

printf("The first subject you scored = %d \n\n",a);
printf("The second subject you scored = %d \n\n",b);
printf("The third subject you scored = %d \n\n",c);
printf("The total marks is = %d \n\n",total);

printf("YOUR AVERAGE MARK IS = %d \n\n",average);

return 0;




}