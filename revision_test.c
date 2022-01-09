#include <stdio.h>
int main(void)
{
char ch;
printf("Please input a lowercase character ");
scanf("%c", &ch);
printf("the uppercase equivalent is '%c'\n", ch - 'a' + 'A');
return 0;
}