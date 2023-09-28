#include<stdio.h>

int main(){
int myAge = 43;
int  *ptr=&myAge;
printf("%d\n", *ptr);
// printf("%d", myAge);

    return 0;
}