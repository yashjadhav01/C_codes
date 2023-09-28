#include<stdio.h>
#include<string.h>

int main(){
char str[50]="hello my name is yash";
char *sub;
sub=strstr(str,"h");
printf("%s",sub);

    return 0;
}