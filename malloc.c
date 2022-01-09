#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char name[100];
    char *description;

    strcpy(name,"ricky Deco");
    description= malloc(200*sizeof(char));

    if(description==NULL){
        fprintf(stderr,"Error-Unable to allocate memory required \n");

    }else{
        strcpy(description,"He is a computer science student in Rongo university");

    }
    printf("Name: %s\n",name);
    printf("Description: %s\n",description);  

    return 0;

}