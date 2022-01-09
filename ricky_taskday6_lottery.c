#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOTAL_NUMBER 6
void seed_generator(void);
int get_rand_in_range(int from, int to);
int search(int target, int array[], int size);
int int_compare(const void* v_one, const void* v_two);
int main(void){
    int i;
    int r;
    int selected[TOTAL_NUMBER];
    seed_generator();
    for(i = 0; i < TOTAL_NUMBER; i++) {
        do r = get_rand_in_range(1, 49);
        while(search(r, selected, i));
        selected[i] = r;
        }
        qsort(selected, TOTAL_NUMBER, sizeof(int), int_compare);
        
        for(i = 0; i < TOTAL_NUMBER; i++)
        printf("%i\t", selected[i]);
        printf("\n");
        return 0;
        }
int get_rand_in_range(int from, int to){
    int min = (from > to) ? to : from;
    return rand() % abs(to - from + 1) + min;
    }
void seed_generator(void){
    time_t now;
    now = time(NULL);
    srand((unsigned)now);
}
int search(int target, int array[], int size){
    int i;
    for(i = 0; i < size; i++)
    if(array[i] == target)
    return 1;
    return 0;
}
int int_compare(const void* v_one, const void* v_two){
    const int* one = v_one;
    const int* two = v_two;
    return *one - *two;
}