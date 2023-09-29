#include<stdio.h>
#include<string.h>

int main(){
char str[50]="my name is yash";
char *sub;
sub=strstr(str,"n");
printf("%s",sub);


    return 0;
}