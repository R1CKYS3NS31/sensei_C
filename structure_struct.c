#include<stdio.h>
#include <string.h>

struct books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;

};
int main(){
    struct books book1;
    struct books book2;
    
    strcpy(book1.title, "C programming");
    strcpy(book1.author, "Ricky Five");
    strcpy(book1.subject, "C learning from Ricky");
    book1.book_id=12345;

    strcpy(book2.title, "Story of coding");
    strcpy(book2.author, "Joseh Brazza");
    strcpy(book2.subject, "Blood of programming");
    book2.book_id=87654;

    printf("The title of book 1 is : %s\n",book1.title);
    printf("The author of book 1 is: %s\n",book1.author);
    printf("The subject of book 1 is : %s\n",book1.subject);
    printf("The book id of book 1 is : %d\n\n",book1.book_id);

    printf("The title of book 2 is : %s\n",book2.title);
    printf("The author of book 2 is : %s\n",book2.author);
    printf("The subject of book 2 is : %s\n",book2.subject);
    printf("The book id of book 2 is : %d\n\n",book2.book_id);

    return 0;
}