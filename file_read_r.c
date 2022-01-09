#include <stdio.h>
int main(){
    FILE *fp;
    char buff[255];

    fp=fopen("/tmp/test.txt","r");
    
    fgets(buff,255,(FILE*)fp);
    printf("1: %s\n",buff);

    fgets(buff,255,(FILE*)fp);
    printf("2: %s\n",buff);

    fgets(buff,225,(FILE*)fp);
    printf("3: %s\n",buff);

    /*repeats #3*/
    fscanf(fp,"%s",buff);
    printf("4: %s\n",buff);


    fclose(fp);

}