#include<stdio.h>
#include<string.h>

struct juices{
    char name[50];
    char company[50];
    char flavour[50];
    int production;
};
void printjuices( struct juices *juice);
int main(){
    struct juices juice1;
    struct juices juice2;

    strcpy(juice1.name, "Quencher");
    strcpy(juice1.company, "Menengai LTD");
    strcpy(juice1.flavour, "Orange");
    juice1.production=432;

    strcpy(juice2.name, "Delmonte");
    strcpy(juice2.company, "Thika fruits LTD");
    strcpy(juice2.flavour, "Mango");
    juice2.production=108;

    printjuices( &juice1);
    printjuices( &juice2);
    return 0;

}void printjuices(struct juices *juice){
    printf("Name of juice : %s\n",juice->name);
    printf("Company producing : %s\n",juice->company);
    printf("Flovour of the juice : %s\n",juice->flavour);
    printf("Number of production : %d\n\n",juice->production);
} 