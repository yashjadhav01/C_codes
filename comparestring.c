#include<stdio.h>
#include<string.h>

int main(){
char str1[20],str2[20];
printf("enter 1st string: ");
scanf("%s",str1);
printf("enter 2nd string: ");
scanf("%s",str2);
if(strcmp(str1,str2)==0){
printf("strings are equal");
}
else{
 printf("strings are not equal");
}

return 0;
}