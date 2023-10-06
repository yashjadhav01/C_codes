#include<stdio.h>
enum Level {
LOW=1,
MEDIUM,
HIGH,
};
int main() {

enum Level Myvar=1;
// printf("Enter the number");
// scanf("%d",&Myvar);
switch (Myvar)
{
case 1:
    printf("low level");
    break;
case 2:
    printf("medium level");
    break;
case 3:
    printf("High level");
    break;    

default:
printf("Please enter the correct level");
    break;
}
return 0;

}