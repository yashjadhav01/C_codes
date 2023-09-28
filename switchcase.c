#include<stdio.h>

int main(){
int month;
printf("enter the value between 1 to 12:");
scanf("%d",&month);
switch (month)
{
    case 1:
    printf("%s","Jan");
    break;
    case 2:
    printf("%s","Feb");
    break;
    case 3:
    printf("%s","March");
    break;
    case 4:
    printf("%s","April");
    break;
    case 5:
    printf("%s","May");
    break;
    case 6:
    printf("%s","June");
    break;
    case 7:
    printf("%s","July");
    break;
    case 8:
    printf("%s","Aug");
    break;
    case 9:
    printf("%s","Sept");
    break;
    case 10:
    printf("%s","Oct");
    break;
    case 11:
    printf("%s","Nov");
    break;
    case 12:
    printf("%s","Dec");
    break;
    default:
    printf("please enter the number between 1 to 12");
    break;
}
    return 0;
}