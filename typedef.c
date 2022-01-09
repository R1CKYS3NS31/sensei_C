#include <stdio.h>
#include <string.h>

typedef struct Data{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;

    };
int main(){
    struct Data data;

    strcpy(data.title, "Typedef Struct");
    strcpy(data.author, "Ricky Kamau");
    strcpy(data.subject, "A reminder of struct");
    data.book_id=1000;

    printf("The title of the book is : %s\n",data.title);
    printf("The author of rhe book is called : %s\n",data.author);
    printf("The subject to cover is : %s\n",data.subject);
    printf("The ID of the book is : %d\n",data.book_id);

    return 0;

}//ricky has bugs