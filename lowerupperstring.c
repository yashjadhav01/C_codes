#include<stdio.h>
#include<string.h>

int main(){
char str[20];
printf("Enter string: ");
scanf("%s",str);
printf("string is :%s",str);
printf("\nlower string is: %s",strlwr(str));
printf("\nupper string is: %s",strupr(str));



    return 0;
}