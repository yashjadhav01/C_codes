#include<stdio.h>

int main(){
int p=1000;
printf("Principle=%d\n",p);
int r=10;
printf("Rate of Interest=%d\n",r);
int t=5;
printf("Time Period=%d\n",t);
int SI=(p*r*t)/100;
printf("Simple Interest=%d",SI);

    return 0;
}