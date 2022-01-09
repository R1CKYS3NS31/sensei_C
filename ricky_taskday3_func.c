#include <stdio.h>

int get_int(void);
double get_double(void);
int main(void){
    int i;
    double d;
    printf("type an integer ");
    i = get_int();
    printf("the integer was %i\n", i);
    printf("type an double ");
    d = get_double();
    printf("the double was %lg\n", d);
    return 0;
}
int get_int(void){
    int result;
    printf("> ");
    while(scanf("%i", &result) != 1) {
        while(getchar() != '\n');
        printf("> ");
        }

        return result;
}
double get_double(void){
    double result;
    printf("> ");
    while(scanf("%lf", &result) != 1) {
        while(getchar() != '\n');
        printf("> ");
}
return result;
}