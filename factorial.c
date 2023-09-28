
#include<stdio.h>
// int fact(int n);
int fact(int n){
if (n>=1){
    return n*fact(n-1);
}
else{
    return 1;
}
}

int main(){
int n;
printf("enter the number");
scanf("%d",&n);
printf("%d!=%d",fact(n)); 
    return 0;

}