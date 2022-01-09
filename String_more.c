#include<stdio.h>
#include<string.h>
int main(){
    char str1[18]="Hello";
    char str2[12]=" world";
    char str3[12];

    strcpy(str3,str1);
    printf("This is a use of (strcpy) for copying string into str3 : %s \n",str3);

    strcat(str1,str2);
    printf("This is use of (strcat) for joining str1&str2 : %s\n",str1);

    int len=strlen(str1);
    printf("This is the use of (strlen) for length of str1 : %d\n",len);

    return 0;


}