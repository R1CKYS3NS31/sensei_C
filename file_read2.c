#include <stdio.h>
int main(){
    FILE* fp;
    char buff[255];
    
    fp=fopen("/tmp/test.txt","r");
    fscanf(fp,"%s",buff);/*reads the first word in the file*/
    printf("1: %s\n",buff);

    fgets(buff,255,(FILE*)fp);
    printf("2: %s\n",buff);

    fgets(buff,255,(FILE*)fp);
    printf("3: %s\n",buff);

    fclose(fp);
}