#include<stdio.h>

int main(){
int a;
int b;
int c;
printf("enter a=");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);
printf("enter c=");
scanf("%d",&c);
if (a>b&&a>c){
    printf("a is greater");
}
else if (b>c&&b>a){

printf("b is greater");
}
else{
    printf("c is greater");
} 

    return 0;
}