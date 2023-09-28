#include<stdio.h>
int main(){
    int n=44354,reverse=0,rem;
    int original=n;
    while(n>0){
      rem=n%10;
      reverse=reverse*10+rem;
      n=n/10; 
    }
    printf("%d\n",reverse);
    if(original==rem){
        printf("number is palidrome");
    }
    else{
        printf("number is not palidrome");
    }
    
    return 0;
}