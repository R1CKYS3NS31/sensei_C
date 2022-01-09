#include <stdio.h>
int main(void)
{
char ch;
printf("Please input a lowercase character ");
scanf("%c", &ch);
char caps = ch - 'a' + 'A';
printf("the uppercase equivalent is '%c'\n",caps);
return 0;
}