#include <stdio.h>
int main(){
    FILE *fp;
    fp=fopen("/tmp/test.txt","w+");
    fprintf(fp,"This is testing fprintf \n");
    fputs("This is testing for fputs...\n",fp);
    fputs("Ricky is my Boss.\n",fp);
    fclose(fp);
}