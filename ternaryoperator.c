#include<stdio.h>

int main(){
int num=8;
// if(num%2==0){  //if else
//     printf("even");
// }
// else{
//     printf("odd");
// }
(num%2==0)?printf("even\n"):printf("odd"); //ternary operator

int time=11;
(time<12)?printf("good morning"):printf("good afternoon");

    return 0;
}