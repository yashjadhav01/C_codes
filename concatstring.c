#include<stdio.h>
#include<string.h>

int main(){
char ch[20]={'y','a','s','h',' ','\0'};
char ch2[20]={'j','a','d','h','a','v','\0'};
strcat(ch,ch2);
printf("%s",ch);

    return 0;
}