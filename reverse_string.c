#include<stdio.h>
#include<string.h>

int main(){
char str[100], temp;
int i=0,j;
printf("enter the string: ");
scanf("%s",str);
i=0;
j=strlen(str)-1;
while(i<j){

    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
}
printf("%s",str);
    return 0;
}