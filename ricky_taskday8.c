#include <stdio.h>
#define STOP_LINE 20
int show(char*);
int main(void){
    char name[100+1];
    printf("File to show ");
    scanf("%100s", name);
    getchar();
    return show(name);
}
int show(char* filename){
    int ch;
    int lines = 0;
    FILE* stream;
    if((stream = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Cannot open file %s, ", filename);
        perror("");
        return 1;
}while((ch = fgetc(stream)) != EOF) {
    putchar(ch);
    if(ch == '\n') {
        lines++;
        if(lines == STOP_LINE) {
            lines = 0;
            while(getchar() != '\n');
            }
}
}
fclose(stream);
return 0;
}