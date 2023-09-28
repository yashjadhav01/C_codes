#include<stdio.h>
int main(){
    int electricityunit;
    printf("enter the units: ");
    scanf("%d", &electricityunit);

    int first200unit=0;//0-200unit
    int next200unit=4; //201-400 unit
    int next300unit=6; //401-700 unit
    int amount;
     if(electricityunit<=200){
        amount=first200unit;
       printf("%d",amount);
     }
     else if(electricityunit>200 && electricityunit<=400){
        amount=(electricityunit-200)*4;
        printf("%d",amount);
     }
     else if(electricityunit>400 && electricityunit<=700){
        amount=(electricityunit-(200+200))*6 +800;
        printf("%d",amount);
     }
     else{
        amount=electricityunit*7;
        printf("%d",amount);
     }
    return 0;
}