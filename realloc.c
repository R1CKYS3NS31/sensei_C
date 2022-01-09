#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char name[100];
    char*description;

    strcpy(name,"Ricky Deco");
    description=malloc(30*sizeof(char));
    if(description==NULL){
        fprintf(stderr,"Error-unable to allocate memory rrequired\n");

    }else{
        strcpy(description,"He is a computer science student in Rongo university.");

    }
    description=realloc(description,100*sizeof(char));
    if(description==NULL){
        fprintf(stderr,"Error-unable to allocate required memory\n");
        
    }else{
        strcat(description,"He is a first year student.\n");
    }
    printf("Name: %s",name);
    printf("Description",description);

    free(description);
    ///ricky has bugs


}